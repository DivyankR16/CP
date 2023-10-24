#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    ll a[n];
    forn(i, n) cin >> a[i];
    map<ll, ll> dp;
    forn(i,n){
        dp[a[i]] = 0;
    }
    ll lst=0;
    ll val = 0;
    forn(i,n){
        dp[a[i]] = 1 + dp[a[i] - 1];
        if(val<dp[a[i]]){
            val = dp[a[i]];
            lst = a[i];
        }
    }
    vector<ll> ans;
    for (ll i = n - 1; i >= 0;i--){
        if(lst==a[i]){
            ans.push_back(i);
            lst--;
        }
    }
    reverse(ans.begin(), ans.end());
    cout << ans.size() << '\n';
    for(auto v:ans){
        cout << v+1 << " ";
    }
    cout << "\n";
}
int main(){
solve();
return 0;
}
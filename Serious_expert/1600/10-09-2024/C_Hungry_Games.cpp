#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, x;
    cin >> n >> x;
    ll a[n];
    forn(i, n) cin >> a[i];
    vector<ll> dp(n+2, 0);
    ll sum = 0;
    ll j = n - 1;
    for (ll i = n - 1; i >= 0;i--){
        sum += a[i];
        if(sum>x){
           while(sum>x){
               sum -= a[j];
               j--;
           }
        }
        dp[i] = j - i + 1 + dp[j + 2];
    }
    ll ans = 0;
    for (ll i = 0; i < n;i++){
        ans += dp[i];
    }
    cout << ans << "\n";
}
int main(){
ios_base:: sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
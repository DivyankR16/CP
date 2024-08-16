#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
vector<ll>icb(ll x){
    vector<ll> ans;
    while(x){
        ans.push_back(x % 2);
        x /= 2;
    }
    return ans;
}
void solve(){
    ll x;
    cin >> x;
    vector<ll> ans;
    ll num = x;
    ans = icb(x);
    // 110
    ll n = ans.size();
    for (ll i = 0; i < n;i++){
        ll j = i;
        while(j<n & ans[j]==1){
            j++;
        }
        if(j-i<=1)continue;
        if(j==n){
            for (ll k = i + 1; k < j; k++)
            {
                ans[k] = 0;
            }
            ans[i] = -1;
            ans.push_back(1);
        }
        else{
            ans[j] = 1;
            for (ll k = i + 1; k < j;k++){
                ans[k] = 0;
            }
                ans[i] = -1;
        }
    }
    cout << ans.size() << "\n";
    for(auto i:ans){
        cout << i << " ";
    }
    cout << "\n";
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
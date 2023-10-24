#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
// ll recur(ll n,ll a[],ll curidx,ll consumed,ll x){
//     if(consumed==x || curidx==n){
//         return 0;
//     }
//     ll ans = 0;
//     ans = max(1+recur(n, a, curidx + 1, consumed + (ans + 1) * a[curidx], x),recur(n,a,curidx+1,consumed+(ans)*a[curidx],x));
//     return ans;
// }
void solve(){
    ll n, x;
    cin >> n >> x;
    ll a[n];
    forn(i, n) cin >> a[i];
    ll dp[n];
    forn(i,n){
        dp[i] = (n - i) * a[i];
    }
    sort(dp, dp + n);
    ll ans = 0;
    forn(i,n){
       if(x-dp[i]>=0){
           ans++;
           x -= dp[i];
       }
       else{
           break;
       }
    }
    cout << ans << "\n";
    // cout << recur(n, a, 0, 0, x);
}
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    solve();
    return 0;
}
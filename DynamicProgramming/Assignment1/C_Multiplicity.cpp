#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
const ll maxx = 1e6+7;
ll divisors[maxx];
const ll mod = 1e9 + 7;
void filldivisors(ll x){
    vector<ll> cur;
    for (ll i = 1; i * i <= x;i++){
            if(x%i==0){
                cur.push_back(i);
                if(x/i!=i){
                    cur.push_back(x / i);
                }
            }
        
    }
    sort(cur.begin(), cur.end());
    reverse(cur.begin(), cur.end());
    for(auto ele:cur){
            divisors[ele] = (divisors[ele]+divisors[ele - 1])%mod;
    }
}
//Brute-Force-----------------------------------------------
// vector<ll> memo;
// ll recur(ll a[],ll idx,ll curlen,ll n){
//       if(idx==n){
//         if(curlen==1){
//             return 0;
//         }
//         else{
//           return 1;
//         }
//       }
//     //   if(memo[idx]!=-1)
//     //     return memo[idx];
//       ll ans = 0;
//       if(a[idx]%curlen==0){
//         ans=(ans+recur(a, idx + 1, curlen + 1, n))%mod;
//       }
//       ans=(ans+recur(a, idx + 1, curlen, n))%mod;
//       return ans%mod;
// }
//------------------------------------------------------------------
//Top-Down-----------------------------------------------------------
// void dpsol(ll n, ll a[]){
//     ll dp[n][n];
//     forn(i,n){
//         forn(j,n){
//             dp[i][j] = 0;
//         }
//     }
//     dp[0][0] = 1;
//     for (ll i = 1; i < n;i++){
//         for (ll j = 0; j < i+1;j++){
//             if(a[i]%(j+1)==0){
//                 if(!j){
//                     dp[i][j] =1+dp[i - 1][j];
//                 }
//                 else{
//                 dp[i][j] =dp[i - 1][j] + dp[i - 1][j - 1];
//                 }
//             }
//             else{
//                 dp[i][j] = dp[i - 1][j];
//             }
//         }
//     }
//     ll ans = 0;
//     forn(i,n){
//         ans += dp[n-1][i];
//     }
//     cout << ans << "\n";
// }
//----------------------------------------------------------------------------
void efficient(ll n,ll a[]){
    forn(i,n){
        filldivisors(a[i]);
}
ll ans = 0;
for (ll i = 1; i < n + 1;i++)
{
        ans = (ans + divisors[i]) % mod;
}
cout << ans << "\n";
}
//-----------------------------------------------------------------------
void solve(){
    ll n;
    cin >> n;
    ll a[n];
    forn(i, n) cin >> a[i];
    divisors[0] = 1;
    // memo.clear();
    // memo.resize(n, -1);
    // cout<<recur(a, 0,1, n)<<"\n";
    // dpsol(n, a);
    efficient(n,a);
}
int main(){
solve();
return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
const ll mod = 1e9 + 7;
vector<ll> memo;
ll recur(ll a[],ll idx,ll curlen,ll n){
      if(idx==n){
        if(curlen==1){
            return 0;
        }
        else{
          return 1;
        }
      }
    //   if(memo[idx]!=-1)
    //     return memo[idx];
      ll ans = 0;
      if(a[idx]%curlen==0){
        ans=(ans+recur(a, idx + 1, curlen + 1, n))%mod;
      }
      ans=(ans+recur(a, idx + 1, curlen, n))%mod;
      return ans%mod;
}
void solve(){
    ll n;
    cin >> n;
    ll a[n];
    forn(i, n) cin >> a[i];
    memo.clear();
    memo.resize(n, -1);
    cout<<recur(a, 0,1, n)<<"\n";
}
int main(){
solve();
return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,k;
cin>>n>>k;
ll mod=1e9+7;
ll dp[n+1][64];
forn(i,n+1){
    forn(j,64){
        dp[i][j]=0;
    }
}
for(ll i=1;i<=n;i++){
    ll val;
    cin>>val;
    for(ll j=0;j<=63;j++){
        dp[i][j]=(dp[i][j]+dp[i-1][j])%mod;
        dp[i][j&val]=(dp[i][j&val]+dp[i-1][j])%mod;
    }
    dp[i][val]=(dp[i][val]+1)%mod;
}
ll ans=0;
   forn(j,64){
    if(__builtin_popcount(j)==k){
        ans=(ans+dp[n][j])%mod;
    }
   }
cout<<ans<<"\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
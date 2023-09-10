#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
vector<ll>dp;
vector<bool>used;
vector<vector<ll>>gp;
ll dfs(ll v){
   if(used[v]){
    return dp[v];
   }
   ll sum=0;
   used[v]=1;
   for(auto i:gp[v]){
      sum+=dfs(i);
   }
   if(!gp[v].empty()){
    dp[v]=min(dp[v],sum);
   }
   return dp[v];
}
void solve(){
ll n,k;
cin>>n>>k;
dp.resize(n);
used.assign(n,0);
gp.assign(n,vector<ll>(0));
forn(i,n){
   ll x;
   cin>>x;
   dp[i]=x;
}
forn(i,k){
    ll x;
    cin>>x;
    dp[x-1]=0;
}
forn(i,n){
    ll m;
    cin>>m;
    forn(j,m){
        ll var;
        cin>>var;
        gp[i].push_back(var-1);
    }
}
forn(i,n){
    dfs(i);
}
forn(i,n){
    cout<<dp[i]<<" ";
}
cout<<"\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
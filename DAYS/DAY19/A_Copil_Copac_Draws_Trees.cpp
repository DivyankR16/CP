#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
const ll IDX=300000;
vector<pair<ll,ll>>edges[IDX];
vector<ll>dp(IDX);
vector<ll>edgegennode(IDX);
void dfs(ll u){
    for(auto v:edges[u]){
       if(dp[v.first]==0){
           dp[v.first]=dp[u]+(edgegennode[u]>v.second);
           edgegennode[v.first]=v.second;
           dfs(v.first);
       }
    }

}
void solve(){
ll n;
cin>>n;
forn(i,n){
    dp[i]=0;
    edgegennode[i]=0;
    edges[i].clear();
}
for(ll i=1;i<=n-1;i++){
    ll x,y;
    cin>>x>>y;
    x--;y--;
    edges[x].push_back({y,i});
    edges[y].push_back({x,i});
}
dp[0]=1;
dfs(0);
ll ans=0;
forn(i,n){
    ans=max(ans,dp[i]);
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
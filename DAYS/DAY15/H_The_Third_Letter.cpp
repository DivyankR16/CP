#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
vector<bool>visited;
vector<ll>dp;
vector<vector<pair<ll,ll>>>edges;
void dfs(ll v){
    visited[v]=1;
    for(auto i:edges[v]){
        if(!visited[i.first]){
        dp[i.first]=dp[v]+i.second;
        dfs(i.first);
        }
    }
}
void solve(){
ll n,m;
cin>>n>>m;
visited.assign(n,0);
dp.assign(n,0);
edges.assign(n,vector<pair<ll,ll>>(0));
ll arr[n][3];
forn(i,m){
    ll a,b,d;
    cin>>a>>b>>d;
    a--,b--;
    edges[a].push_back({b,d});
    edges[b].push_back({a,-d});
    arr[i][0]=a;
    arr[i][1]=b;
    arr[i][2]=d;
}
forn(i,n){
    if(!visited[i])dfs(i);
}
bool ans=true;
forn(i,m){
    ll a=arr[i][0];
    ll b=arr[i][1];
    ll d=arr[i][2];
    if(dp[a]+d!=dp[b]){
        ans=false;
        break;
    }
}
if(ans){
    cout<<"YES"<<"\n";
}
else{
    cout<<"NO"<<"\n";
}
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
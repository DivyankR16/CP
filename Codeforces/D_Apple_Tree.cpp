#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
const ll maxt=2e5+1;
ll dp[maxt];
map<ll,vector<ll>>arr;
void dfs(ll u,ll prev){
    if(arr[u].size()==1 && prev!=-1){
        dp[u]=1;
        return;
    }
    for(auto e:arr[u]){
        if(e!=prev){
        dfs(e,u);
        dp[u]+=dp[e];}
    }
}
void solve(){
ll n;
cin>>n;
memset(dp,0,sizeof(dp));
forn(i,n){
    arr[i].clear();
}
forn(i,n-1){
    ll u,v;
    cin>>u>>v;
    arr[u].push_back(v);
    arr[v].push_back(u);
}
dfs(1,-1);
ll q;
cin>>q;
forn(i,q){
    ll l,r;
    cin>>l>>r;
    cout<<dp[l]*dp[r]<<"\n";
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
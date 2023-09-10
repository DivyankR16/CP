#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
const ll valk=1e6;
ll glb[valk];
vector<ll>arr[valk];
void dfs(ll x,ll val=-1){
    if(arr[x].size()==1 && x!=1) glb[x]=1;
    for(auto edge:arr[x]){
        if(edge!=val)dfs(edge,x) , glb[x]+=glb[edge];
    }
}
void solve(){
ll n;
cin>>n;
 for(ll i=1;i<=n;i++){
    arr[i].clear();
    glb[i]=0;
}
forn(i,n-1){
    ll x,y;
    cin>>x>>y;
    arr[x].push_back(y);
    arr[y].push_back(x);
}
dfs(1);
ll q;
cin>>q;
forn(i,q){
    ll a,b;
    cin>>a>>b;
    cout<<glb[a]*glb[b]<<"\n";
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
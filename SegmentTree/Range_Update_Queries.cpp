#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
vector<ll>tree;
ll build(vector<ll>&a){
    ll n=a.size();
    while(__builtin_popcount(n)!=1){
        a.push_back(0);
        n++;
    }
    tree.resize(2*n);
    forn(i,n){
        tree[n+i]=a[i];
    }
    // for(ll i=n-1;i>=1;i--){
    //     tree[i]=tree[2*i]+tree[2*i+1];
    // }
    return n;
}
void update(ll node,ll segleft,ll segright,ll qleft,ll qright,ll u){
    if(segleft==segright){
      tree[node]+=u;
    }
    if(qleft>segright || qright<segleft){
        return;
    }
    ll lastidx=segleft+(segright-segleft)/2;
    update(2*node,segleft,lastidx,qleft,qright,u);
    update(2*node+1,lastidx+1,segright,qleft,qright,u);
}
void solve(){
ll n,q;
cin>>n>>q;
vector<ll>a(n);
forn(i,n)cin>>a[i];
n=build(a);
forn(i,q){
ll type;
cin>>type;
if(type==1){
    ll a,b,u;
    cin>>a>>b>>u;
    a--;b--;
    update(1,0,n-1,a,b,u);
}
else{
    ll k;
    cin>>k;
    k--;
    cout<<tree[n+k]<<"\n";
}
}
}
int main(){

solve();
return 0;
}
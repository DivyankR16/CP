#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
const ll maxx=1e5+10;
ll lasy[maxx];
vector<ll>tree;
ll build(vector<ll>&a){
    ll n=a.size();
    while(__builtin_popcount(n)!=1){
        a.push_back(0);
        n++;
    }
    tree.resize(2*n);
    forn(i,n){
        tree[i+n]=a[i];
    }
    for(ll i=n-1;i>=1;i--){
        tree[i]=tree[2*i]+tree[2*i+1];
    }
    return n;
}
void update(ll node,ll segleft,ll segright,ll qleft, ll qright,ll value){
   if(qleft<=segleft && qright>=segright){
    tree[node]+=value;
   }
   if(qleft>segleft || qright<segright){
    return 0;
   }
    ll lastidx=segleft+(segright-segleft)/2;
    update(2*node,segleft,lastidx,qleft,qright,value);
    update(2*node+1,lastidx+1,segright,qleft,qright,value);
    tree[node]=tree[2*node]+tree[2*node+1];
}
ll query(ll node,ll segleft,ll segright,ll qleft,ll qright){
    if(segleft==segright){
        if(!lasy[node]){
                tree[node]+=(segright-segleft+1)*lasy[node];
                lasy[2*node]+=lasy[node];
                lasy[2*node+1]+=lasy[node];
            lasy[node]=0;
        }
    }
    if(qleft<=segleft && qright>=segright){
        return tree[node];
    }
    if(qleft>segright || qright<segleft){
        return 0;
    }
    ll lastidx=segleft+(segright-segleft)/2;
    return query(2*node,segleft,lastidx,qleft,qright)+query(2*node+1,lastidx+1,segright,qleft,qright);
}
void solve(){
ll n;
cin>>n;
vector<ll>a(n);
forn(i,n)cin>>a[i];
n=build(a);

}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
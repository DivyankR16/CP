#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
vector<ll>tree;
vector<ll>lazy;
ll build(vector<ll>&a){
    ll n=a.size();
    while(__builtin_popcountll(n)!=1){
        a.push_back(0);
        n++;
    }
    tree.resize(2*n);
    lazy.resize(2*n);
    forn(i,n){
        tree[n+i]=a[i];
    }
    for(ll i=n-1;i>=1;i--){
        tree[i]=tree[2*i]+tree[2*i+1];
    }
    return n;
}
void update(ll node,ll segleft,ll segright,ll qleft, ll qright,ll value){
     if(lazy[node]){
        tree[node]+=lazy[node]*(segright-segleft+1);
        if(segleft!=segright){
            lazy[2*node]+=lazy[node];
            lazy[2*node+1]+=lazy[node];
        }
        lazy[node]=0;
     }
    if(segleft>qright || segright<qleft){
        return;
    }
     if(segleft>=qleft && segright<=qright){
        tree[node]+=(segright-segleft+1)*value;
            if(segleft!=segright){
                lazy[2*node]+=value;
                lazy[2*node+1]+=value;
         }
        return;
     }
     ll lastidx=segleft+(segright-segleft)/2;
     update(2*node,segleft,lastidx,qleft,qright,value);
     update(2*node+1,lastidx+1,segright,qleft,qright,value);
     tree[node]=tree[2*node]+tree[2*node+1];
}
ll query(ll node,ll segleft,ll segright,ll qleft,ll qright){
    if(lazy[node]){
        tree[node]+=lazy[node]*(segright-segleft+1);
        if(segleft!=segright){
            lazy[2*node]+=lazy[node];
            lazy[2*node+1]+=lazy[node];
        }
        lazy[node]=0;
    }
    if(segleft>qright || segright<qleft){
        return 0;
    }
    if(segleft>=qleft && segright<=qright){
        return tree[node];
    }
    ll lastidx=segleft+(segright-segleft)/2;
    return query(2*node,segleft,lastidx,qleft,qright)+query(2*node+1,lastidx+1,segright,qleft,qright);
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
    cout<<query(1,0,n-1,k,k)<<"\n";
}
}
}
int main(){
solve();
return 0;
}
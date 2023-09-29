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
    for(ll i=0;i<n;i++){
        tree[n+i]=a[i];
    }
    for(ll i=n-1;i>=1;i--){
        tree[i]=tree[2*i]+tree[2*i+1];
    }
    return n;
}
ll query(ll node,ll segleft,ll segright,ll qleft,ll qright){
    if(qleft<=segleft && qright>=segright){
        return tree[node];
    }
    if(qleft>segright || qright<segleft){
        return 0;
    }
    ll lastidx=segleft + (segright-segleft)/2;
    return query(2*node,segleft,lastidx,qleft,qright)+query(2*node+1,lastidx+1,segright,qleft,qright);
}
void update(ll n,ll k, ll u){
    tree[n+k]=u;
    for(ll i=(n+k)/2;i>=1;i/=2){
        tree[i]=tree[2*i]+tree[2*i+1];
    }
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
        ll k,u;
        cin>>k>>u;
        k--;
       update(n,k,u);
    }
    else{
        ll l,r;
        cin>>l>>r;
        l--;r--;
        cout<<query(1,0,n-1,l,r);

    }
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
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
// vector<ll>tree;
// ll build(vector<ll>&a){
//     ll n=a.size();
//     while(__builtin_popcount(n)!=1){
//         a.push_back();
//         n++;
//     }
//     tree.resize(2*n);
//     forn(i,n){
//         tree[i+n]=a[i];
//     }
//     for(ll i=n-1;i>=1;i--){
//         tree[i]=tree[2*i]^tree[2*i+1];
//     }
// }
// ll query(ll node,ll segleft,ll segright,ll qleft,ll qright){
//     if(qleft<=segleft && qright>=segright){
//         return tree[node];
//     }
//     if(segleft>qright || segright<qleft){
//         return
//     }
//     ll lastidx=segleft + (segright-segleft)/2;
//     return query(2*node,segleft,lastidx,qleft,qright)^query(2*node+1,lastidx+1,segright,qleft,qright);

// }
void solve(){
ll n,q;
cin>>n>>q;
vector<ll>a(n);
forn(i,n)cin>>a[i];
ll prexor[n];
prexor[0]=a[0];
for(ll i=1;i<n;i++){
    prexor[i]=prexor[i-1]^a[i];
}
// n=build(a);
forn(i,q){
    ll l,r;
    cin>>l>>r;
    l--;r--;
    // cout<<query(1,0,n-1,l,r)<<"\n";
    if(!l){
        cout<<prexor[r]<<'\n';
    }
    else{
        cout<<(prexor[r]^prexor[l-1])<<"\n";
    }
}
}
int main(){
solve();
return 0;
}
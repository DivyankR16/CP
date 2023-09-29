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
// void BuildSegmentTree (vector<ll>&a)
// {
//     ll n =a.size();
    
//     while(__builtin_popcountll(n)!=1)
//     {
//         a.push_back(0);
//         n++;
//     }
    
//     tree.resize(2*n);
    
//     for(int i=0;i<n;++i)
//     tree[n+i]=a[i];
    
//     for(int i=n-1;i>=1;--i)
//     tree[i]= tree[2*i] + tree[2*i+1] ;
        
// }
ll query(ll node,ll segleft,ll segright,ll qleft, ll qright){
    if(qleft<=segleft && qright>=segright){
        return tree[node];
    }
    if(qleft>segright || qright<segleft){
           return 0;
    }
    ll lastidx=(segleft)+(segright-segleft)/2;
    return query(2*node,segleft,lastidx,qleft,qright)+query(2*node+1,lastidx+1,segright,qleft,qright);
}
 
// ll query(ll node, ll l,ll r,ll nodel, ll noder)
// {
 
    
//     if(noder<l|| nodel>r)
//     return 0;
    
//     if(l<=nodel && noder<=r)
//     return tree[node];
    
    
    
//     ll mid = nodel+ (noder-nodel)/2;
//     return (query(2*node,l,r,nodel,mid) + query(2*node+1,l,r,mid+1,noder));
 
// }
void solve(){
ll n,q;
cin>>n>>q;
vector<ll>a(n);
forn(i,n)cin>>a[i];
n=build(a);
forn(i,q){
    ll l,r;
    cin>>l>>r;
    l--;r--;
    cout<<query(1,0,n-1,l,r)<<"\n";
}
}
int main(){
solve();
return 0;
}
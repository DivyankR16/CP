#Solving competitve programming and pure DSA questions!!!<br>
Segment Tree Implementation(Simple sum Range Query and modifying Question)<br>
There is some mistake in the implementation but i am unable to find it.
<pre>
//----------------------------------------------------------------------------------CODE--GOES--HERE---------------------------------//-----------------------//
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
vector<ll>tree;
ll sumQuery(ll node,ll segleft,ll segright,ll qleft,ll qright){
      if(qleft>=segleft && qright<=segright){
        return tree[node];
      }
      if(qleft>segright || qright<segleft){
        return 0;
      }
      ll lastidx=segleft+(segright-segleft)/2;
      return (sumQuery(2*node,segleft,lastidx,qleft,qright)+sumQuery(2*node+1,lastidx+1,segright,qleft,qright));
}
void update(ll n,ll pos,ll target){
    tree[n+pos]=target;
    for(ll i=((n+pos)/2);i>=1;i/=2){
        tree[i]=tree[2*i]+tree[2*i+1];
    }
}
void recurUpdate(ll node,ll segleft,ll segright,ll qleft,ll qright,ll target){
    if(qleft>=segleft && qright<=segright){
        tree[node]=target;
        return;
    }
    if(qright<segleft || qleft>segright){
        return;
    }
    ll lastidx=segleft+(segright-segleft)/2;
    recurUpdate(2*node,segleft,lastidx,qleft,qright,target);
    recurUpdate(2*node+1,lastidx+1,segright,qleft,qright,target);
    tree[node]=tree[2*node]+tree[2*node+1];
    return;
}
void solve(){
ll n,q;
cin>>n>>q;
vector<ll>a(n);
forn(i,n)cin>>a[i];
while(__builtin_popcountll(n)!=1){
    a.push_back(0);
    n++;
}
tree.resize(2*n);
for(ll i=0;i<n;i++){
    tree[i+n]=a[i];
}
for(ll i=n-1;i>=1;i--){
    tree[i]=tree[2*i]+tree[2*i+1];
}
forn(i,q){
    ll type,l,r;
    cin>>type>>l>>r;
    if(type==1){
     l--;
     update(n,l,r);
    }
    else{
        l--;
        r--;
       cout<<sumQuery(1,0,n-1,l,r)<<"\n";
    }
}
}
int main(){
solve();
return 0;
}
//-----------------------------------------------------------------------END--------------------------------------------------------//
       </pre>

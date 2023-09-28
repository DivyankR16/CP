#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
vector<ll>tree;
ll build(ll n,vector<ll>&a){
    while(__builtin_popcount(n)!=1){
          a.push_back(0);
          n++;
    }
    tree.resize(2*n);
    for(ll i=0;i<n;i++){
        tree[n+i]=a[i];
    }
    for(ll i=n-1;i>=1;i--){
        tree[i]=tree[2*i] & tree[2*i+1];
    }
    return n;
}
ll query(ll node,ll segleft,ll segright,ll qleft, ll qright){
    if(qleft<=segleft && qright>=segright){
        return tree[node];
    }
    if(qleft>segright || qright<segleft){
        return 1073741823;
    }
    ll lastidx=(segleft+segright)/2;
    return query(2*node,segleft,lastidx,qleft,qright) & query(2*node+1,lastidx+1,segright,qleft,qright);
}
void solve(){
ll n;
cin>>n;
vector<ll>a(n);
forn(i,n){
    cin>>a[i];
}
n=build(n,a);
ll q;
cin>>q;
forn(i,q){
    ll l,k;
    cin>>l>>k;
    l--;
    ll left=l;
    ll fin=-2;
    ll right=n-1;
    while(left<=right){
        ll mid=left+(right-left)/2;
        ll ans=query(1,0,n-1,l,mid);
        if(ans>=k){
           fin=mid;
           left=mid+1;
        } 
        else{
            right=mid-1;
        }
    }
    cout<<fin+1<<" ";
}
cout<<"\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
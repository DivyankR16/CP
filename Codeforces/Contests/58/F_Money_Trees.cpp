#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
vector<ll>tree;
ll ans(ll node,ll segleft,ll segright,ll left,ll right){
    if(left>=segleft && right<=segright){
        return tree[node];
    }
    if(left>segright || right<segleft){
        return 0;
    }
    ll last_left_idx=(segleft+segright)/2;
    return ans(2*node,segleft,last_left_idx,left,right)+ans(2*node+1,last_left_idx+1,segright,left,right);
}
void update(ll pos,ll target,ll n){
    tree[pos+n]=target;
    for(ll i=(pos+n)/2;i>=1;i/=2){
        tree[i]=tree[2*i]+tree[2*i+1];
    }
}
void build(ll n,vector<ll>a){
    while(__builtin_popcount(n)!=1){
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
}
void func(ll a[],ll n){

}
void solve(){
ll n,k;
cin>>n>>k;
ll a[n];
forn(i,n)cin>>a[i];
ll h[n];
forn(i,n)cin>>h[i];
ll ans=0;
ll i=0;
while(i<n){
ll indx=i;
    ll sum=a[i];
    while(i+1<n && h[i]%h[i+1]==0 && sum<=k){
        sum+=a[i+1];
        i++;
    }
    ans=max(ans,i-indx+1);
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
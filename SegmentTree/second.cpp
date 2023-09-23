#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
vector<ll>tree;
void build(vector<ll>&a){
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
}
ll 
void solve(){

}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
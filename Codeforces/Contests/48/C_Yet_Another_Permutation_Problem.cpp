#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll ak[n+1];
memset(ak,0,sizeof(ak));
for(ll i=1;i<=n/2;i++){
    ll val=i;
    if(!ak[val]){
    cout<<val<<" ";
    ak[val]=1;}
     while(2*val<=n){
        if(!ak[2*val]){
        cout<<2*val<<" ";}
        ak[2*val]=1;
        val*=2;
     }
}
for(ll i=1;i<=n;i++){
    if(!ak[i]){
        cout<<i<<" ";
    }
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
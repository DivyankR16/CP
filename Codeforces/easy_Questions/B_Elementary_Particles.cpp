#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
ll const val=200005;
vector<ll>arr[val+1];
void solve(){
ll n;
cin>>n;
forn(i,n){
    ll x;
    cin>>x;
    arr[x].push_back(i);}
ll ans=INT_MAX;
for(ll i=1;i<val+1;i++){
    if(arr[i].size()>=2){
   forn(j,arr[i].size()-1){
      ans=min(ans,arr[i][j+1]-arr[i][j]);
   }}}
   forn(i,val+1){
    arr[i].clear();
   }
if(ans!=INT_MAX){
cout<<n-ans<<"\n";}
else{cout<<-1<<"\n";}
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);cout.tie(NULL);
ll t;
cin>>t;
while(t--){
solve();
};
return 0;
}
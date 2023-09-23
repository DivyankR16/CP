#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,k,a,b;
cin>>n>>k>>a>>b;
// if(a<k && b<k){
//     cout<<0<<"\n";
//     return;
// }
ll ans=LONG_LONG_MAX;
ll arr[n][2];
forn(i,n){
  cin>>arr[i][0]>>arr[i][1];
}
a--;
b--;
ll dk=abs(arr[a][0]-arr[b][0])+abs(arr[a][1]-arr[b][1]);
ans=min(ans,dk);
ll mindis=LONG_LONG_MAX;
forn(i,k){
    mindis=min(mindis,abs(arr[i][0]-arr[a][0])+abs(arr[i][1]-arr[a][1]));
}
ll mindis2=LONG_LONG_MAX;
forn(i,k){
    mindis2=min(mindis2,abs(arr[i][0]-arr[b][0])+abs(arr[i][1]-arr[b][1]));
}
if(k==0){
    cout<<ans<<"\n";
}
else{
cout<<min(mindis+mindis2,ans)<<"\n";}
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
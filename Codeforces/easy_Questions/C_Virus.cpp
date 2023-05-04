#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,m;
cin>>n>>m;
ll arr[m];
forn(i,m){
    cin>>arr[i];
}
sort(arr,arr+m);
ll ans[m-1];
forn(i,m-1){
    ans[i]=arr[i+1]-arr[i]-1;
}
ans[m-1]=n-arr[m-1]+arr[0]-1;
sort(ans,ans+m);
ll i=m-1;
ll need=0;
while(i>=0){
  if((ans[i]-((m-1-i)*4+1))>0){
  need+=(ans[i]-((m-1-i)*4+1));
  i--;}
  else{
    break;
  }
}
if((ans[i]-((m-1-i)*4+1))==0){
    need++;
}
cout<<n-need<<endl;
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
};
return 0;
}
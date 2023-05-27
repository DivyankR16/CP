#include<bits/stdc++.h>
#include<cmath>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,W;
cin>>n>>W;
ll w[n];
forn(i,n)cin>>w[i];
ll disRect[20];
memset(disRect,0,sizeof(disRect));
forn(i,n){
  ll power=0;
  ll val=w[i];
  while(val>1){
    val/=2;
    power++;
  }
  disRect[power]++;
}
ll ans=1;
ll widthLeft=W;
for(ll i=0;i<n;i++){
  ll larSatisfying=-1;
  for(ll j=19;j>=0;j--){
    if(disRect[j] && (1<<j)<=widthLeft){
      larSatisfying=j;
      break;
    }}
    if(larSatisfying==-1){
       ans++;
       widthLeft=W;
       for(ll j=19;j>=0;j--){
    if(disRect[j] && (1<<j)<=widthLeft){
      larSatisfying=j;
      break;
    }
    }
  }
  widthLeft-=(1<<larSatisfying);
  disRect[larSatisfying]--;
}
cout<<ans<<"\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
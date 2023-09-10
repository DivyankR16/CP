#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll xa,ya;
cin>>xa>>ya;
ll xb,yb;
cin>>xb>>yb;
ll xc,yc;
cin>>xc>>yc;
ll ans=1;
if(((xb-xa)>0 && (xc-xa)>0) || ((xb-xa)<0 && (xc-xa)<0)){
  ans+=min(abs(xb-xa),abs(xc-xa));
}
if(((yb-ya)>0 && (yc-ya)>0) || ((yb-ya)<0 && (yc-ya)<0)){
  ans+=min(abs(yb-ya),abs(yc-ya));
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
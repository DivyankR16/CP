#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll a[n];
forn(i,n)cin>>a[i];
ll ans=0;
ll need=INT_MAX;
for(ll i=n-2;i>=1;i--){
     if(((a[i]-a[i+1])>0 && (a[i]-a[i-1])>0) || ((a[i]-a[i+1])<0 && (a[i]-a[i-1])<0)){
           ll val=abs(a[i]-a[i+1])+abs(a[i]-a[i-1]);
            ll difftobeadded=abs(a[i+1]-a[i-1]);
            need=min(need,difftobeadded-val);
     }
}
for(ll i=n-1;i>=1;i--){
    ans+=abs(a[i]-a[i-1]);
}
ll ans1=LONG_LONG_MAX;
if(need!=INT_MAX){
    ans1=ans+need;
}
ll ans2=ans-abs(a[n-2]-a[n-1]);
ll ans3=ans-abs(a[0]-a[1]);
cout<<min({ans1,ans2,ans3})<<"\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
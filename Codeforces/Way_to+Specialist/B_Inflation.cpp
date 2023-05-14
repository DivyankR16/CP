#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,k;
cin>>n>>k;
ll p[n];
forn(i,n)cin>>p[i];
ll totalAns=0;
ll sum=p[0];
forn(i,n-1){
  if((p[i+1]*100/sum==k && p[i+1]*100%sum==0) || p[i+1]*100/sum<k){
    sum+=p[i+1];
    continue;
  }
  ll l=1;
  ll r=1e18;
  ll ans=LONG_LONG_MAX;
  while(l<=r){
    ll mid=r-(r-l)/2;
    if(p[i+1]*100/(sum+mid)>k)l=mid+1;
    else if((p[i+1]*100/(sum+mid)==k && p[i+1]*100%(sum+mid)!=0))l=mid+1;
    else{
       ans=min(ans,mid);
       r=mid-1;
    }
  }
  sum+=p[i+1];
  sum+=ans;
  totalAns+=ans;
}
cout<<totalAns<<"\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
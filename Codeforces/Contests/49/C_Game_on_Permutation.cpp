#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll a[n];
forn(i,n)cin>>a[i];
ll min1=a[0];
ll min2=INT_MAX;
ll ans=0;
for(ll i=1;i<n;i++){
      if(a[i]>min1 && a[i]<min2){
        ans++;
        min2=min(min2,a[i]);
      }
      min1=min(min1,a[i]);
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
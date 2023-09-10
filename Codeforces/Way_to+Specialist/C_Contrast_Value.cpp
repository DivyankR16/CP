#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
vector<ll>a(n);
forn(i,n)cin>>a[i];
// if(n==1){
//     cout<<1<<"\n";
//     return;
// }
// ll contrast=0;
// forn(i,n-1){
//     contrast+=abs(a[i]-a[i+1]);
// }
// if(contrast==0){
//     cout<<1<<"\n";
//     return;
// }
n=unique(a.begin(),a.end())-a.begin();
ll ans=n;
forn(i,n-2){
      if(a[i]<a[i+1] && a[i+1]<a[i+2])ans--;
      if(a[i]>a[i+1] && a[i+1]>a[i+2])ans--;
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
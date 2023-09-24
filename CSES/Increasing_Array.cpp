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
for(ll i=1;i<n;i++){
   if(a[i-1]-a[i]>0){
    ans+=a[i-1]-a[i];
    a[i]+=(a[i-1]-a[i]);
   }
}
cout<<ans<<"\n";
}
int main(){
solve();

return 0;
}
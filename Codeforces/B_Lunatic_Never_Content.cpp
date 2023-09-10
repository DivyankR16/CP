#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll a[n];
forn(i,n)cin>>a[i];
bool check=true;
for(ll i=0;i<=n/2;i++){
  if(a[i]!=a[n-1-i]){
    check=false;
    break;
  }
}
if(check){
    cout<<0<<"\n";
    return;
}
ll ans=-1;
for(ll i=0;i<=n/2;i++){
    if(ans==-1)ans=abs(a[i]-a[n-1-i]);
    else{
        ans=__gcd(ans,abs(a[i]-a[n-1-i]));
    }
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
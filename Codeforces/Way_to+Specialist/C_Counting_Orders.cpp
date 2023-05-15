#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll need=1e9+7;
ll a[n];
forn(i,n)cin>>a[i];
ll b[n];
forn(i,n)cin>>b[i];
sort(a,a+n);
sort(b,b+n);
ll cnter=0;
ll ans=1;
for(ll i=n-1;i>=0;i--){
   ll val=n-(upper_bound(a,a+n,b[i])-a)-cnter;
   ans=(ans*val)%need;
   cnter++;
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
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,d;
cin>>n>>d;
ll a[n];
forn(i,n)cin>>a[i];
ll i=1;
ll ans=a[0];
ll days=0;
while(i<n && days+i*a[i]<=d){
     ans+=a[i];
     days+=i*a[i];
     i++;
}
if(i<=n-1){
    // days+=((d-days)/(i))*i;
    ans+=((d-days)/(i));
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
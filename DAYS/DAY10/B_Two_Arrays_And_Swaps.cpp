#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,k;
cin>>n>>k;
ll a[n],b[n];
forn(i,n)cin>>a[i];
forn(i,n)cin>>b[i];
sort(a,a+n);
sort(b,b+n);
ll ans=0;
forn(i,n){
    ans+=a[i];
}
ll ck=0;
forn(i,n){
   if(++ck <=k){
    if(b[n-i-1]>a[i]){
       ans-=a[i];
       ans+=b[n-i-1];}
       else{
        break;
       }
   }
   else{
    break;
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
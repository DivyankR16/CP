#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
const ll N=1000001;
ll b[N];
void solve(){
ll n;
cin>>n;
ll a[n];
forn(i,n)cin>>a[i];
forn(i,n){
    b[a[i]]++;
}
ll ans=0;
forn(i,n){
   ans+=(b[a[i]]-1)*(b[a[i]]-2);
   ll B=2;
   while(a[i]*B*B<N){
    ans+=b[a[i]*B]*b[a[i]*B*B];
    B++;
   }
}  
cout<<ans<<"\n";
forn(i,n){
    b[a[i]]--;
}
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
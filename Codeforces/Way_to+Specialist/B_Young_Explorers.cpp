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
ll nndd[n];
memset(nndd,0,sizeof(nndd));
ll bchue[n];
memset(bchue,0,sizeof(bchue));
forn(i,n){
    nndd[a[i]-1]++;
}
forn(i,n){
    ans+=(nndd[i]/(i+1));
    bchue[i]=nndd[i]%(i+1);
}
ll cnter=0;
forn(i,n){
   cnter+=bchue[i];
   if(cnter>=(i+1)){
    ans++;
    cnter-=(i+1);
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
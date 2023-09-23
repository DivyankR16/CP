#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll a[n];
ll ans=0;
forn(i,n)cin>>a[i];
forn(i,n){
    ll val=1;
    val*=(a[i]+1);
    forn(j,n){
       if(j!=i){
          val*=a[j];
       }
    }
    ans=max(ans,val);
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
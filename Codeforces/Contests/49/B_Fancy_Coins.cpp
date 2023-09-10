#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll m,k,a1,ak;
cin>>m>>k>>a1>>ak;
ll ans=INT_MAX;
for(ll i=0;i*k<=m;i++){
    ll val=m;
    val-=i*k;
    val-=a1;
    val=max(0ll,val);
    val+=max(i-ak,0ll);
    ans=min(ans,val);
}
cout<<ans<<"\n";
// ll ans=0;
// ans+=need/k;
// if(ans*k==need){
//     cout<<ans<<"\n";
// }
// else{
//     cout<<ans+need-ans*k<<"\n";
// }
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll val=n;
if(val==1){
    cout<<0<<"\n";
    return;
}
ll ans=0;
while(val>1){
    ans+=4*(val-1)*(val/2);
    val-=2;
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
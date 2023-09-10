#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,q;
cin>>n>>q;
ll a[n];
forn(i,n)cin>>a[i];
if(n==1){
    cout<<a[0]<<"\n";
    return;
}
ll ans=0;
ll i=0;
while(i<n-1){
    while(i<(n-1) && a[i+1]>=a[i])i++;
    ans+=a[i];
    while(i<(n-1) && a[i+1]<a[i])i++;
    if(i!=n-1){
    ans-=a[i];}
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
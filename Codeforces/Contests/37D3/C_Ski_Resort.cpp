#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,k,q;
cin>>n>>k>>q;
ll a[n];
forn(i,n)cin>>a[i];
ll ans=0;
ll i=0;
while(i<n){
    ll cnt=0;
    while(i<n && a[i]<=q){cnt++;
    i++;}
    if(cnt>=k){
        for(ll i=k;i<=cnt;i++){
        ans+=cnt-i+1;}
    }
    i++;
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
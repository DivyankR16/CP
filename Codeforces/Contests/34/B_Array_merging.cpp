#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll a[n];
forn(i,n)cin>>a[i];
ll b[n];
forn(i,n)cin>>b[i];
ll cnscnt[2*n];
forn(i,2*n){
    cnscnt[i]=0;
}
ll i=0;
while(i<n){
    ll val=1;
    ll idx=i;
    while(i<n-1 && b[i]==b[i+1]){
        i++;
        val++;
    }
    cnscnt[b[i]-1]=max(cnscnt[b[i]-1],val);
    if(idx==i)i++;
}
ll ans=INT_MIN;
ll j=0;
while(j<n){
    ll val=1;
    ll idx=j;
    while(j<n-1 && a[j]==a[j+1]){
        j++;
        val++;
    }
    ans=max(ans,cnscnt[a[j]-1]+val);
    if(idx==j)j++;
}
forn(i,2*n){
    ans=max(ans,cnscnt[i]);
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
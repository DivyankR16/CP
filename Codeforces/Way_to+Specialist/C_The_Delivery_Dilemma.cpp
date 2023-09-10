#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll a[n],b[n];
forn(i,n)cin>>a[i];
forn(i,n){cin>>b[i];}
ll l=0;
ll r=1e9+2;
while(l<r){
    ll mid=(l+r)/2;
    ll sum=0;
    forn(i,n){
        if(a[i]>mid){
           sum+=b[i];
        }
    }
    if(sum<=mid)r=mid;
    else l=mid+1;
}
cout<<r<<"\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
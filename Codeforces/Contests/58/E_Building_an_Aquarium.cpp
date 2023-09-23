#include<bits/stdc++.h>
using namespace std;
// #define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
#define ll int64_t
void solve(){
ll n,x;
cin>>n>>x;
vector<ll>a(n);
forn(i,n)cin>>a[i];
ll l=1;
ll r=3e9;
ll ans=1;
while(l<=r){//
    ll mid=l+(r-l)/2;
    ll pani=0;
    forn(i,n){
      pani+=(mid>=a[i]?mid-a[i]:0);
    }
    if(pani<=x){
       ans=max(ans,mid);
       l=mid+1;
    }
    else{
        r=mid-1;
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
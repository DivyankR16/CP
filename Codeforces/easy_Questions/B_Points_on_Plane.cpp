#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll l=0;
ll r=1e9;
ll ans=LONG_LONG_MAX;
while(l<=r){
    ll mid=(l+r)/2;
    if(mid*mid>=n){
       ans=mid;
       r=mid-1;
    }
    else{
        l=mid+1;
    }
}
cout<<ans-1<<"\n";
}
signed main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);cout.tie(NULL);
ll t;
cin>>t;
while(t--){
solve();
};
return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll l,r;
cin>>l>>r;
ll i=l;
ll ans=0;
ll diff=LONG_LONG_MIN;
while(i<=r){
    ll val=i;
    ll diffmax=LONG_LONG_MIN;
    ll diffmin=LONG_LONG_MAX;
while(val){
    diffmax=max(diffmax,val%10);
    diffmin=min(diffmin,val%10);
    val/=10;
}
ll yutt=diffmax-diffmin;
if(yutt>=diff){
    diff=yutt;
    ans=i;
}
i++;
if(yutt==9)break;
}
cout<<ans<<"\n";
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
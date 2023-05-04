#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,m,d;
cin>>n>>m>>d;
ll p[n];
forn(i,n)cin>>p[i];
ll a[m];
forn(i,m)cin>>a[i];
ll pos[n+1];
forn(i,n){
    pos[p[i]]=i+1;
}
ll ans1=INT_MAX;
ll ans2=INT_MAX;
forn(i,m-1){
   ans1=min(ans1,pos[a[i+1]]-pos[a[i]]);
   ll val=pos[a[i]]+d-pos[a[i+1]]+1;
   if(pos[a[i+1]]>pos[a[i]]){
    if(pos[a[i+1]]+val<=n){
        ans2=min(ans2,val);
    }
    if(pos[a[i]]-val>=1){
        ans2=min(ans2,val);
    }
    ll sum=n-pos[a[i+1]]+pos[a[i]]-1;
    if(sum>=val){
        ans2=min(ans2,val);
    }
   }
}
if(ans1<=0 || ans2<=0){
    cout<<0<<"\n";
}
else{
    cout<<min(ans1,ans2)<<"\n";
}
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
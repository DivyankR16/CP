#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,q;
cin>>n>>q;
ll p[n];
forn(i,n)cin>>p[i];
sort(p,p+n,greater<ll>());
forn(i,n){
    if(i)p[i]+=p[i-1];
}
while(q--){
    ll x,y;
    cin>>x>>y;
    ll ans=0;
    ans+=p[x-1]-((x!=y)?p[x-1-y]:0);
    cout<<ans<<endl;
}
}
int main(){
solve();
return 0;
}
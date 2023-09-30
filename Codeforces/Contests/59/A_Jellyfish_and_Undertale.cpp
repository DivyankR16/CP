#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll a,b,n;
cin>>a>>b>>n;
ll x[n];
forn(i,n)cin>>x[i];
sort(x,x+n);
ll ans=b;
forn(i,n){
    ans+=min(x[i],a-1);
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
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,m;
cin>>n>>m;
ll k[n];
forn(i,n)cin>>k[i];
ll c[m];
forn(i,m)cin>>c[i];
unordered_map<ll,ll>mp;
forn(i,n){
    mp[k[i]]++;
}
ll ans=0;
ll majorIdx=0;
for(ll i=m-1;i>=0;i--){
    ll val=mp[i+1];
    while(val){
        if(c[majorIdx]<c[i]){
            ans+=c[majorIdx];
            majorIdx++;
        }
        else{
            ans+=c[i];
        }
        val--;
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
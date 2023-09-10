#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll val[n+1];
memset(val,0,sizeof(val));
forn(i,n){
    ll x;
    cin>>x;
    if(x<=n){
    ++val[x];}
}
ll cnt[n+1];
memset(cnt,0,sizeof(cnt));
for(ll i=1;i<=n;i++){
    for(ll j=i;j<=n;j+=i){
          cnt[j]+=val[i];
    }
}
ll maxval=0;
for(ll i=1;i<=n;i++){
    maxval=max(maxval,cnt[i]);
}
cout<<maxval<<"\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
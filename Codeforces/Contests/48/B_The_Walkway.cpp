#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,m,d;
cin>>n>>m>>d;
ll s[m];
forn(i,m)cin>>s[i];
ll cookies=1;
for(ll i=0;i<m;i++){
    if(!i){
        if(s[i]!=1){
        cookies++;
        cookies+=(s[i]-2)/d;}
    }
    else{
        cookies++;
        cookies+=(s[i]-s[i-1]-1)/d;
    }
}
cookies+=(n-s[m-1])/d;
// cout<<cookies<<"\n";
map<ll,ll>mp;
forn(i,m){
    if(!i){
        ll val;
        if(s[i]!=1){
         val=cookies-(s[i]-2)/d-(s[i+1]-s[i]-1)/d+(s[i+1]-2)/d-1;}
        else{
              val=cookies;
        }
        mp[val]++;
    }
    else if(i==m-1){
        ll val;
        if(s[i]!=n){
      val=cookies-(s[i]-s[i-1]-1)/d-(n-s[i])/d+(n-s[i-1])/d-1;}
      else{
        val=cookies-(s[i]-s[i-1]-1)/d+(n-s[i-1])/d-1;
      }
      mp[val]++;
    }
    else{
        ll val=cookies-(s[i]-s[i-1]-1)/d-(s[i+1]-s[i]-1)/d+(s[i+1]-s[i-1]-1)/d-1;
        mp[val]++;
    }
}
ll mineed=INT_MAX;
ll ans=0;
for(auto i:mp){
    mineed=min(mineed,i.first);
}
for(auto i:mp){
    if(i.first==mineed){
       ans=i.second;
    }
}
cout<<mineed<<" "<<ans<<"\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
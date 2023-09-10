#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,s,k;
cin>>n>>s>>k;
map<ll,ll>mp;
ll a[k];
forn(i,k){
    cin>>a[i];
    mp[a[i]]++;
}
if(!mp[s]){
    cout<<0<<"\n";
}
else{
    ll var=s+1;
    ll ans=INT_MAX;
    for(ll i=var;i<=var+1001;i++){
          if(i<=n && !mp[i]){
            ans=min(ans,i-s);
          }
    }
    for(ll i=var-1;i>=var-1001;i--){
        if( i>=1 && !mp[i]){
            ans=min(ans,s-i);
          }
    }
    
    cout<<ans<<"\n";
}
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll MOD=998244353;
ll n;
cin>>n;
ll a[n];
forn(i,n)cin>>a[i];
ll endcnt[n];
map<ll,ll>mpck;
for(ll i=n-1;i>=0;i--){
    if(mpck.find(a[i])==mpck.end()){
       endcnt[i]=i;
      mpck[a[i]]=i;
    }
    else{
        endcnt[i]=mpck[a[i]];
    }
}
ll ans=1;
ll curmax=-1;
forn(i,n-1){
     curmax=max(curmax,endcnt[i]);
     if(i==curmax){
        ans=(ans*2)%MOD;
        ans%=MOD;
     }
}
cout<<ans<<"\n";
}
int main(){
solve();
return 0;
}
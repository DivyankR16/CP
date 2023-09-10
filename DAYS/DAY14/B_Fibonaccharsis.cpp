#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,k;
cin>>n>>k;
ll ans=0;
for(ll i=0;i<=n;i++){
    ll fst=n;
    ll scd=i;
    ll cnt=2;
    while(fst-scd>=0 && fst-scd<=scd){
        ll result=fst-scd;
        fst=scd;
        scd=result;
        cnt++;
    if(cnt==k){ans++;
    break;}
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
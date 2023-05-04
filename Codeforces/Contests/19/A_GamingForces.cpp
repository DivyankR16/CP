#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll a[n];
forn(i,n){
    cin>>a[i];
}
ll need=0;
forn(i,n){
    if(a[i]==1)need++;
}
if(need){
    ll ok=0;
    if(need%2==1){
      ok=need/2+1;
    }
    else{
        ok=need/2;
    }
    cout<<n-need+ok<<"\n";
}
else{
    cout<<n<<"\n";
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
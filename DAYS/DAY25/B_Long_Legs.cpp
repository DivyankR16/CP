#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll a,b;
cin>>a>>b;
ll need=1e5;
ll ans=INT_MAX;
for(ll i=1;i<=need;i++){
    // ll val=(a%i==0?a/i:a/i+1)+(b%i==0?b/i:b/i+1)+(i-1);
    ll val=0;
    if(a%i==0){
        val+=a/i;
    }
    else{
        val+=(a/i+1);
    }
    if(b%i==0){
        val+=b/i;
    }
    else{
        val+=(b/i+1);
    }
    val+=(i-1);
    // cout<<val<<"al"<<"\n";
    ans=min(ans,val);
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
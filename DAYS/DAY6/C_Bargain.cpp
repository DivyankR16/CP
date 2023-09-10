#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll MOD=1e9+7;
string s;
cin>>s;
ll n=s.size();
// ll dp[n];
// memset(dp,0,sizeof(dp));
// for(ll i=n-1;i>=0;i--){
//     if(i==n-1){
//         dp[i]=((n-i)*round(pow(10,n-i-1)))%MOD;
//     }
//     else{dp[i]=dp[i]+dp[i+1]+(n-i)*round(pow(10,n-i-1));}
// }
ll ans=0;
ll sum=0;
ll place=1;
for(ll i=n-1;i>=0;i--){
    ll val=((i*(i+1)/2 % MOD)%MOD*place%MOD+sum%MOD)%MOD;
    sum=(sum%MOD+(place%MOD*(n-i)%MOD)%MOD)%MOD;
    place=(place%MOD*10)%MOD;
    ans=(ans%MOD + (s[i]-'0')*val%MOD)%MOD;
}
cout<<ans<<"\n";
}
int main(){
solve();
return 0;
}
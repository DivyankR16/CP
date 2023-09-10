#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll a[n];
forn(i,n)cin>>a[i];
ll dp[n];
dp[0]=0;
unordered_map<ll,ll>m;
m[a[0]]=0;
for(ll i=1;i<n;i++){
    dp[i]=dp[i-1];
    if(m.find(a[i])!=m.end()){
        dp[i]=max(dp[i],((m[a[i]]-1>=0)?dp[m[a[i]]-1]+i-m[a[i]]+1:i-m[a[i]]+1));
        dp[i]=max(dp[i],dp[m[a[i]]]+i-m[a[i]]);
    }
    m[a[i]]=i;
}
cout<<dp[n-1]<<"\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
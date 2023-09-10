#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
const ll MAXN=3000000;
ll dp[1500][1500];
ll ans[MAXN];
void solve(){
ll n;
cin>>n;
cout<<ans[n]<<"\n";
}
int main(){
ll t;
cin>>t;
ll sum=1;
for(ll i=1;i<=1500;i++){
    for(ll j=i-1;j>=1;j--){
        dp[j][i-j]+=dp[j-1][i-j]+dp[j][i-j-1]-dp[j-1][i-j-1]+sum*sum;
        ans[sum]=dp[j][i-j];
        sum++;
    }
}
while(t--){
solve();
}
return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
vector<ll>dp(n+1);
ll ans=0;
for (ll i = 1; i <= n; i++)
{ll x;
cin>>x;
dp[i]=min(dp[i-1]+1,x);
ans+=dp[i];
}
cout<<ans<<endl;
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
};
return 0;
}
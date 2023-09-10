#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll a[n];
forn(i,n)cin>>a[i];
ll dp[n][3];
dp[0][0]=a[0]+1;
dp[0][1]=a[0];
dp[0][2]=a[0]-1;
for(ll i=1;i<n;i++){
    forn(j,3){
        dp[i][j]=dp[i-1][j];
        if(j==0){
            dp[i][j]=max(dp[i][j],a[i]+i+1);
        }
        else if(j==1){
            dp[i][j]=max(dp[i][j],dp[i-1][j-1]+a[i]);
        }
        else{
           dp[i][j]=max(dp[i][j],dp[i-1][j-1]+a[i]-i-1);
        }
    }
}
cout<<dp[n-1][2]<<"\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
string s;
cin>>s;
ll m;
cin>>m;
string l,r;
cin>>l>>r;
ll n=s.size();
ll dp[10][n];
for(ll i=0;i<10;i++){
    forn(j,n){
        dp[i][j]=LONG_LONG_MAX;
    }
}
forn(i,n){
    if(i==n-1){
        dp[s[i]-'0'][i]=i;
    }
    else{
        dp[s[i]-'0'][i]=i;
        forn(j,10){
        dp[j][i]=min(dp[j][i],dp[j][i+1]);
        }
    }
}
forn(i,m){
    
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
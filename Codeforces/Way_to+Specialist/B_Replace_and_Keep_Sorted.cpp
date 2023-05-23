#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,q,k;
cin>>n>>q>>k;
ll a[n];
forn(i,n)cin>>a[i];
ll dp[n];
forn(i,n){
    if(i && i<n-1){
        ll lowerLimit=1;
        ll upperLimit=a[i+1];
        dp[i]=upperLimit-lowerLimit-1;
        if(dp[i]<0)dp[i]=0;
    }
    else if(i==0){
        ll upperLimit=a[i+1];
        dp[i]=upperLimit-1;
        if(dp[i]<0)dp[i]=0;
    }
    else{
        ll lowerLimit=1;
        dp[i]=k-lowerLimit-1;
        if(dp[i]<0)dp[i]=0;
    }
}
forn(i,n){
    if(i)dp[i]+=dp[i-1];
}
forn(i,q){
    ll x,y;
    cin>>x>>y;
    if(x!=1){
        cout<<dp[y-1]-dp[x-2]<<"\n";
    }
    else{
        cout<<dp[y-1]<<"\n";
    }
}
}
int main(){

solve();
return 0;
}
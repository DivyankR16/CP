#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,q,k;
cin>>n>>q>>k;
ll a[n];
forn(i,n)cin>>a[i];
if(n==1){
    forn(i,q){
        ll x,y;
        cin>>x>>y;
        cout<<k-1<<"\n";
    }
    return;
}
ll dp[n];
for(ll i=0;i<n;i++){
    if(!i){
        dp[i]=a[i+1]-a[i]-1;
    }
    else if(i==n-1){
        dp[i]=a[i]-a[i-1]-1;
    }
    else{
        dp[i]=a[i+1]-a[i]-1+a[i]-a[i-1]-1;
    }
}
forn(i,n){
    if(i)dp[i]+=dp[i-1];
}
forn(i,q){
    ll x,y;
    cin>>x>>y;
    if(x==1 && y==n){
        cout<<a[x-1]-1+dp[y-1]+k-a[y-1]<<"\n";
    }
    else if(x==1){
        cout<<a[x-1]-1+dp[y-1]+k-a[y]+1<<"\n";
    }
    else if(y==n){
        cout<<a[x-2]+dp[y-1]-dp[x-2]+k-a[y-1]<<"\n";
    }
    else{
        cout<<a[x-2]+dp[y-1]-dp[x-2]+k-a[y]+1<<"\n";
    }
}
}
int main(){

solve();
return 0;
}
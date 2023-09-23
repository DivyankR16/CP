#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,q;
cin>>n>>q;
ll a[n];
forn(i,n)cin>>a[i];
ll dp[n];
memset(dp,0,sizeof(dp));
bool is_rnd_idx[n];
forn(i,n){
    is_rnd_idx[i]=0;
}
for(ll i=1;i<n-1;i++){
   if(a[i-1]>=a[i] && a[i]>=a[i+1]){
    dp[i]+=1;
    is_rnd_idx[i]=1;
   }
   dp[i]+=dp[i-1];
}
if(n>1){
dp[n-1]=dp[n-2];}
// forn(i,n){
//     cout<<dp[i]<<" ";
// }
// cout<<"\n";
forn(i,q){
    ll l,r;
    cin>>l>>r;
    l--;
    r--;
    ll val=r-l+1;
    ll rnd_inds=(l?dp[r]-dp[l-1]:dp[r]);
    ll ans=val-rnd_inds;
    // cout<<rnd_inds<<" "<<ans<<" dekh lo"<<"\n";
    if(l!=r){
    if(is_rnd_idx[l])ans++;
    if(is_rnd_idx[r])ans++;}
    else{
       if(is_rnd_idx[l])ans++; 
    }
    cout<<ans<<"\n";
}
}
int main(){
solve();
return 0;
}
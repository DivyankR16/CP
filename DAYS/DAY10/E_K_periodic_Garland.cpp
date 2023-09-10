#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,k;
cin>>n>>k;
string s;
cin>>s;
ll dp[n];
forn(i,n){
    dp[i]=0;
}
forn(i,n){
    if(!i){
        dp[i]=(s[i]=='1')?1:0;
    }
    else{
        dp[i]+=dp[i-1]+((s[i]=='1')?1:0);
    }
}
ll ans=INT_MAX;
ll cntprev1=0;
forn(i,k){
ll ck=cntprev1;
ll idx=i;
string help="";
while(idx+k<n){
    ll number_of_one=dp[idx+k-1]-dp[idx];
    ck+=number_of_one;
    help+=s[idx];
    idx+=k;
}
help+=s[idx];
ll sz=help.size();
ll maxconsecuone=0;
ll z=0;
ll totone=0;
while(z<sz){
    ll incnt=0;
    while(z<sz && help[z]=='1'){incnt++;
    totone++;
    z++;}
    maxconsecuone=max(maxconsecuone,incnt);
    z++;
}
if(idx!=n-1){
    ck+=dp[n-1]-dp[idx];
}
ck+=totone-maxconsecuone;
ans=min(ans,ck);
cntprev1+=(s[i]=='1')?1:0;
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
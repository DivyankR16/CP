#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
ll pow(ll a,ll b){
ll result=0;
while(b>0){
if(b%2){
result=result*a;}
a=a*a;
b>>=1;
}
return result;}
ll gcd(ll a,ll b){
if(b==0)return a;
gcd(b,a%b);}
ll md(ll a,ll b) {
ll c = a % b;
return (c < 0) ? c + b : c;
}
//---------------------------------------------------------------------------------------------//
void solve(){
ll n;
cin>>n;
string s;
cin>>s;
ll no0=0;
ll no1=0;
forn(i,n){
    if(s[i]=='0')no0++;
    else no1++;
}
ll ans=no0*no1;
ll i=0;
ll cnt1=0;
ll cnt0=0;
while(i<n){
    while(i<n && s[i]=='1'){
        cnt1++;
        i++;
    }
    ans=max(ans,cnt1*cnt1);
    while(i<n && s[i]=='0'){
       cnt0++;
       i++;
    }
    ans=max(ans,cnt0*cnt0);
    cnt0=0;
    cnt1=0;
}
cout<<ans<<"\n";
}
signed main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);cout.tie(NULL);
ll t;
cin>>t;
while(t--){
solve();
};
return 0;
}
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
if(n%2==0)cout<<n/2<<"\n";
else cout<<n/2+1<<"\n";
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
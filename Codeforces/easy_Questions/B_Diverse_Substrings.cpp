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
//Any string length greater than 100 will not be diverse any way(Common sense)
ll ans=0;
forn(i,n){
vector<ll>v(10);
ll maxFreq=0;
ll dis=0;
ll j=i;
//v[s[j]-'0']++;
while(j<n && ++v[s[j]-'0']<11){
    maxFreq=max(v[s[j]-'0'],maxFreq);
    if(v[s[j]-'0']==1)dis++;
    if(dis>=maxFreq){
       ans++;
    }
    j++;
}
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
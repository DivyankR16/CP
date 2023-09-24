#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
ll gcdExtended(ll a, ll b, ll *x, ll *y)
{   if (a == 0)
{  *x = 0, *y = 1;
  return b;}
ll x1, y1;
ll gcd = gcdExtended(b%a, a, &x1, &y1);
*x = y1 - (b/a) * x1;
*y = x1;
return gcd;
}
ll modInverse(int b, int m)
{
ll x, y;
ll g = gcdExtended(b, m, &x, &y);
if (g != 1){
return -1;}
return (x%m + m) % m;
}
ll modDivide(ll a, ll b, ll m)
{
a = a % m;
ll inv = modInverse(b, m);
if (inv == -1)
{return -1;}
else
{return (inv * a) % m;}
}
const ll mod=998244353;
ll fact(ll n){
    ll ans=1;
    for(ll i=1;i<=n;i++){
       ans=(ans*i)%mod;
    }
    ans%=mod;
    return ans;
}
ll nCr(ll n,ll r){
    ll val1=fact(n);
    ll val2=fact(r);
    ll val3=fact(n-r);
    ll nk=(val1)%mod;
    ll vk=(val2*val3)%mod;
    ll ans=modDivide(nk,vk,mod);
    return ans;
}
void solve(){
string s;
cin>>s;
ll n=s.size();
ll need=0;
ll ways=0;
ll N=0;
ll i=0;
while(i<n){
    ll cnt=0;
    while(i<n-1 && s[i]==s[i+1]){
        i++;
        cnt++;
    }
    if(cnt>0){
        N+=(cnt+1);
    }
    need+=cnt;
    i++;
}
ll ok=nCr(N,need);
ll ok1=(ok*fact(need))%mod;
cout<<need<<" "<<ok1<<"\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
const ll mod=998244353;
struct custom_hash {
static uint64_t splitmix64(uint64_t x) {
x += 0x9e3779b97f4a7c15;
x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
return x ^ (x >> 31);
}
size_t operator()(uint64_t x) const {
static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
return splitmix64(x + FIXED_RANDOM);
}
};
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
void solve(){
ll n;
cin>>n;
ll a[n];
forn(i,n)cin>>a[i];
ll preXor[n];
preXor[0]=a[0];
for(ll i=1;i<n;i++){
    preXor[i]=preXor[i-1]^a[i];
}
ll ans=0;
forn(i,n){
    for(ll j=i;j<n;j++){
       ans=(ans+((i?preXor[j]^preXor[i-1]:preXor[j])*(j-i+1))%mod)%mod;
    }
}
cout<<ans<<"\n";
}
int main(){
solve();
return 0;
}
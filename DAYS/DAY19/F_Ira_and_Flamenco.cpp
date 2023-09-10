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
void solve(){
ll mod=1e9+7;
ll n,m;
cin>>n>>m;
unordered_map<ll,ll>cnt;
ll arr[n];
forn(i,n){
    cin>>arr[i];
    cnt[arr[i]]++;
}
vector<ll>a;
for(auto i:cnt){
    a.push_back(i.first);
}
sort(a.begin(),a.end());
ll sz=a.size();
if(sz<m){
    cout<<0<<"\n";
    return;
}
ll x=1;
ll i=0;
ll j=i+m-1;
for(ll k=i;k<j;k++){
    x=((x)*(cnt[a[k]]))%mod;
}
ll ans=0;
while(j<sz){
    if(abs(a[i]-a[j])<m){
    x=((x%mod)*(cnt[a[j]]%mod))%mod;
      ans=(ans+x>=mod?ans+x-mod:ans+x);
    }
    x=(modDivide(x,cnt[a[i]],mod))%mod;
    i++;
    j++;
}
cout<<ans%mod<<"\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
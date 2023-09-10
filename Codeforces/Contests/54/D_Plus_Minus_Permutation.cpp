#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
ll gcd(long long int a, long long int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
 
ll lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}
void solve(){
ll n,x,y;
cin>>n>>x>>y;
ll nox=n/x;
ll noy=n/y;
ll mix=n/lcm(x,y);
nox-=mix;
noy-=mix;
ll sum1=noy*(noy+1)/2;
ll va=n-nox;
ll sum2=n*(n+1)/2-va*(va+1)/2;
cout<<sum2-sum1<<"\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
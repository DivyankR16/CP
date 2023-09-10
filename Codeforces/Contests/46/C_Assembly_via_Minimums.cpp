#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll N=n*(n-1)/2;
ll a[N];
forn(i,N)cin>>a[i];
sort(a,a+N);
ll idx=0;
cout<<a[idx]<<" ";
forn(i,n-2){
   idx+=n-(i+1);
   cout<<a[idx]<<" ";
}
cout<<1000000000<<"\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
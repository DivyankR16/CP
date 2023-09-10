#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll N=2*n;
ll a[N];
forn(i,N)cin>>a[i];
sort(a,a+N);
cout<<a[N/2]-a[N/2-1]<<"\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
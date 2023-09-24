#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll a[n];
forn(i,n)cin>>a[i];
ll b[n];
forn(i,n)cin>>b[i];
sort(a,a+n);
sort(b,b+n);
ll i=0;
ll j=0;
ll cnt=1;
ll ans1=a[0]*n;
ll ans2=b[0]*n;
for(ll i=0;i<n;i++){
    ans1+=b[i];
    ans2+=a[i];
}
cout<<min(ans1,ans2)<<"\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll a[n];
forn(i,n)cin>>a[i];
if(n==1){
    cout<<0<<"\n";
    return;
}
ll i=0;
ll j=n-1;
sort(a,a+n);
ll ans=0;
while(i<j){
    ans+=a[j]-a[i];
    i++;
    j--;
}
cout<<ans<<"\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
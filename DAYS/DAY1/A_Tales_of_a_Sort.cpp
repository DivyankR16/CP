#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll a[n];
forn(i,n)cin>>a[i];
ll ans=0;
forn(i,n-1){
    if(a[i]>a[i+1]){
        ans=max(ans,a[i]);
    }
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
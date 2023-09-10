#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,m,k,H;
cin>>n>>m>>k>>H;
ll a[n];
forn(i,n)cin>>a[i];
ll ans=0;
forn(i,n){
    ll df=abs(H-a[i]);
    if(df!=0 && df%k==0 && df<=(k*(m-1))){
       ans++;
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
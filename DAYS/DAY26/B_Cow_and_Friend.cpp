#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,x;
cin>>n>>x;
ll a[n];
forn(i,n)cin>>a[i];
sort(a,a+n);
// ll mava=a[n-1];
// if(x>mava){
//     cout<<x/mava+1<<"\n";
// }
// else{
//     forn(i,n){
//         if(x==a[i]){
//             cout<<1<<"\n";
//             return;
//         }
//     }
//     cout<<2<<"\n";
// }
ll ans=INT_MAX;
forn(i,n){
    ll val=(x%a[i]==0?x/a[i]:x/a[i]+1);
    if(x<a[i])val++;
   ans=min(ans,val);
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
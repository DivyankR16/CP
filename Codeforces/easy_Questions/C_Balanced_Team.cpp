#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll a[n];
forn(i,n)cin>>a[i];
sort(a,a+n);
ll j=0;
ll ans=INT_MIN;
forn(i,n){
     while(j<n && a[j]-a[i]<=5){
      j++;
      ans=max(ans,j-i);
     }
}
cout<<ans<<endl;
}
int main(){
solve();
return 0;
}
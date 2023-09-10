#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll a[n];
ll hh=INT_MIN;
forn(i,n){
    cin>>a[i];
   hh=max(hh,a[i]);
}
cout<<hh<<"\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
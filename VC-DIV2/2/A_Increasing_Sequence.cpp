#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll a[n];
forn(i,n)cin>>a[i];
ll val=1;
forn(i,n){
    while(val==a[i])val++;
    if(i==n-1)break;
    val++;
}
cout<<val<<"\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}

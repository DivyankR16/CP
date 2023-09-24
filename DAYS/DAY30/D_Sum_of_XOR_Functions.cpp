#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll a[n];
forn(i,n)cin>>a[i];
ll preXor[n];
preXor[0]=a[0];
for(ll i=1;i<n;i++){
    preXor[i]=preXor[i-1]^a[i];
}
ll ans=0;
forn(i,n){
    ll val=a[i];
    for(ll j=i+1;j<n;j++){
        val^=a[j];
    }
}
}
int main(){
solve();
return 0;
}
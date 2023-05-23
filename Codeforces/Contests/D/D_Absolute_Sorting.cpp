#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll a[n];
forn(i,n)cin>>a[i];
ll minVal=1e9;
ll maxVal=0;
forn(i,n-1){
if(a[i]<a[i+1]){
    minVal=min(minVal,(a[i]+a[i+1])/2);
}
if(a[i]>a[i+1]){
    maxVal=max(maxVal,((a[i]+a[i+1])%2==0)?(a[i]+a[i+1])/2:(a[i]+a[i+1])/2+1);
}}
if(maxVal<=minVal){
    cout<<minVal<<"\n";
}
else{
    cout<<-1<<"\n";
}
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
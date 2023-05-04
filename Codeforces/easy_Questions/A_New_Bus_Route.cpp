#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll a[n];
forn(i,n){
    cin>>a[i];
}
sort(a,a+n);
ll mV=INT_MAX;
for (ll i = 0; i < n-1; i++)
{  mV=min(mV,abs(a[i+1]-a[i]));}
ll count=0;
for (ll i = 0; i < n-1; i++)
{if(abs(a[i+1]-a[i])==mV){
    count++;
}}
cout<<mV<<" "<<count<<endl;

}
int main(){
solve();
return 0;
}
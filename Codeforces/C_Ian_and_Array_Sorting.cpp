#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll a[n];
forn(i,n)cin>>a[i];
if(n%2==1){
    cout<<"YES"<<"\n";
    return;
}
for(ll i=1;i<n-1;i++){
    ll diff=a[i-1]-a[i];
    a[i]+=diff;
    a[i+1]+=diff;
}
if(a[n-2]>a[n-1]){
    cout<<"NO"<<"\n";
}
else{
    cout<<"YES"<<"\n";
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
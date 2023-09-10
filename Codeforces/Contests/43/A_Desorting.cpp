#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll a[n];
forn(i,n)cin>>a[i];
ll mindff=INT_MAX;
forn(i,n-1){
    mindff=min(mindff,a[i+1]-a[i]);
}
if(mindff<0){
    cout<<0<<"\n";
}
else{
    cout<<mindff/2+1<<"\n";
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
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
for(ll i=n-1;i>=0;i--){
    cout<<a[i]<<" ";
}
cout<<"\n";
}
int main(){
solve();
return 0;
}
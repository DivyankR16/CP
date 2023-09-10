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
      if(a[i]<=i+1){
        cout<<i+2<<"\n";
        return;
      }
}
cout<<1<<"\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
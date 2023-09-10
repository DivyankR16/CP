#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,k;
cin>>n>>k;
if(k>=n){
    cout<<1<<"\n";
    return;
}
ll need=1;
for(ll i=1;i<=sqrt(n);i++){
   if(n%i==0){
    if(i<=k && i>need){
        need=i;
    }
    if(n/i<=k && n/i>need){
        need=n/i;
    }
   }
}
cout<<n/need<<"\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
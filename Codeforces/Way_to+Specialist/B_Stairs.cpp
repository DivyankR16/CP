#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll x;
cin>>x;
ll ans=0;
ll val=1;
ll k=val;
while(k<=x){
     ans++;
     val+=1<<ans;
     k+=val*(val+1)/2;
}
cout<<ans<<"\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
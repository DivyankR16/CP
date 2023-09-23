#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,k,x;
cin>>n>>k>>x;
ll N=n-1;
ll need=min(N,x);
if(k>=need+2){
    cout<<-1<<"\n";
    return;
}
if(k==x){
    ll ans=0;
   ll i=0;
   while(i<k){
    ans+=i;
    i++;
    n--;
   }
    while(n>0){
        ans+=x-1;
        n--;
    }
    cout<<ans<<"\n";
}
else{
    ll ans=0;
   ll i=0;
   while(i<k){
    ans+=i;
    i++;
    n--;
   }
   while(n>0){
    ans+=x;
    n--;
   }
   cout<<ans<<"\n";

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
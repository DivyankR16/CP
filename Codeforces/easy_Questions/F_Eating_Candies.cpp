#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll w[n];
forn(i,n){
    cin>>w[i];
}
ll i=0,j=n-1;
ll sA=w[0];
ll sB=w[n-1];
ll ans=0;
while(i<j){
   if(sA>sB){
    j--;
    sB+=w[j];
   }
   else if(sA<sB){
    i++;
    sA+=w[i];
   }
   else{
    ans=i+n-j+1;
    i++;
    sA+=w[i];
   }
}
cout<<ans<<endl;
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
};
return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,k,x;
cin>>n>>k>>x;
ll minsum=k*(k+1)/2;
ll maxsum=n*(n+1)/2-(n-k)*(n-k+1)/2;;
// forn(i,k){
//   minsum+=i+1;
// }
// for(ll i=n;i>=n-k+1;i--){
//      maxsum+=i;
// }
if(x<minsum || x>maxsum){
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
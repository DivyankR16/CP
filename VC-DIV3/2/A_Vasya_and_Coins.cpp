#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll a,b;
cin>>a>>b;
ll ans=a+1;
if(a>b){
    ans=max(ans,2*b+2);
}
else if(a==b){
    ans=max(ans,2*b+1);
}
else{
    ans=max(ans,2*a+1);
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
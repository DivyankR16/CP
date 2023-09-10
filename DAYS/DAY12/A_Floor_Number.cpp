#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,x;
cin>>n>>x;
if(n==1 || n==2){
    cout<<1<<"\n";
    return;
}
ll val=n-2;
if(val%x==0){
    cout<<val/x+1<<"\n";
}
else{
    cout<<val/x+2<<"\n";
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
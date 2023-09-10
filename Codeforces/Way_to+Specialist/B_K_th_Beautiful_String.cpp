#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,k;
cin>>n>>k;
string ans="";
forn(i,n){
   ans+='a';
}
ll prevVal;
ll val=k;
ll cnter=0;
while(true){
cnter++;
val-=cnter;
if(val<=0)break;
prevVal=val;
}
if(val==0){
    ans[n-1-(cnter-1)]='b';
    ans[n-1-cnter]='b';
}
else{
    ans[n-1-(prevVal-1)]='b';
    ans[n-1-cnter]='b';
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
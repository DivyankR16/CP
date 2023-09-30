#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll a[n];
forn(i,n)cin>>a[i];
ll checkpoint[n];
forn(i,n){
    checkpoint[a[i]-1]=i;
}
ll l=n;
ll r=0;
string ans="";
forn(i,n){
    l=min(l,checkpoint[i]);
    r=max(r,checkpoint[i]);
    if(r-l==i){
        ans+='1';
    }
    else{
        ans+='0';
    }
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
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll a[n];
forn(i,n)cin>>a[i];
ll ck=0;
forn(i,n){
    if(a[i]==i+1)ck++;
}
if(ck%2==0){
    cout<<ck/2<<"\n";
}
else{
    cout<<ck/2+1<<"\n";
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
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll a[n];
ll sm=0;
forn(i,n){cin>>a[i];
sm+=a[i];}
bool ans=false;
forn(i,n){
    if(a[i]%2==(sm-a[i])%2){
        ans=true;
        break;
    }
}
if(ans){
    cout<<"YES"<<"\n";
}
else{
    cout<<"NO"<<"\n";
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
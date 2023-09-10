#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll val=n;
bool ans=false;
if(val%2020==0){
    cout<<"YES"<<"\n";
    return;
}
while(val>=2021){
    if(val%2021==0){
        ans=true;
        break;
    }
    val-=2020;
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
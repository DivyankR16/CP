#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll a[n];
forn(i,n)cin>>a[i];
if(n%2==0){
cout<<2<<"\n";
forn(i,2){
    cout<<1<<" "<<n<<"\n";
}}
else{
    cout<<4<<"\n";
    cout<<1<<" "<<n-1<<"\n";
    cout<<1<<" "<<n-1<<"\n";
    cout<<n-1<<" "<<n<<"\n";
    cout<<n-1<<" "<<n<<"\n";
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
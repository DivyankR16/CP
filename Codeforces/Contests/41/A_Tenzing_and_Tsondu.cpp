#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,m;
cin>>n>>m;
ll sum1=0;
ll sum2=0;
ll a[n],b[m];
forn(i,n){
    cin>>a[i];
    sum1+=a[i];
}
forn(i,m){
    cin>>b[i];
    sum2+=b[i];
}
if(sum1>sum2){
    cout<<"Tsondu"<<"\n";
}
else if(sum1==sum2){
    cout<<"Draw"<<"\n";
}
else{
    cout<<"Tenzing"<<"\n";
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
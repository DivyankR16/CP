#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
ll pow(ll a,ll b){
ll result=0;
while(b>0){
if(b%2){
result=result*a;}
a=a*a;
b>>=1;
}
return result;}
ll gcd(ll a,ll b){
if(b==0)return a;
gcd(b,a%b);}
//-------------------------------------------//
void solve(){
ll n;
cin>>n;
ll a[n];
forn(i,n)cin>>a[i];
if(n%2==1){cout<<"NO"<<"\n";
return;}
sort(a,a+n);
for(ll i=1;i<n/2;i++){
  if(a[i]==a[i+n/2-1]){
    cout<<"NO"<<"\n";
    return;
  }
  }
cout<<"YES"<<"\n";
forn(i,n/2){
  cout<<a[i]<<" "<<a[i+n/2]<<" ";
}
cout<<"\n";
}
signed main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);cout.tie(NULL);
ll t;
cin>>t;
while(t--){
solve();
};
return 0;
}
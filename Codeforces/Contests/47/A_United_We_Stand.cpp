#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll a[n];
forn(i,n)cin>>a[i];
bool isalleq=true;
forn(i,n-1){
    isalleq&=(a[i]==a[i+1]);
}
if(isalleq){
    cout<<-1<<"\n";
    return;
}
sort(a,a+n);
ll lb=0;
ll lc=0;
vector<ll>b;
vector<ll>c;
c.push_back(a[n-1]);
ll i=n-1;
while(i>=1 && a[i]==a[i-1]){
      c.push_back(a[i-1]);
      i--;
}
for(ll k=0;k<i;k++){
    b.push_back(a[k]);
}
cout<<b.size()<<" "<<c.size()<<"\n";
forn(i,b.size()){
    cout<<b[i]<<" ";
}
cout<<"\n";
forn(i,c.size()){
    cout<<c[i]<<" ";
}
cout<<"\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
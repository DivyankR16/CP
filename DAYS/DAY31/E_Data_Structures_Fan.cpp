#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll a[n];
forn(i,n)cin>>a[i];
string s;
cin>>s;
ll q;
cin>>q;
ll preXor[n];
preXor[0]=a[0];
for(ll i=1;i<n;i++){
    preXor[i]=preXor[i-1]^a[i];
}
ll xor0=0;
ll xor1=0;
forn(i,n){
    if(s[i]=='1'){
        xor1^=a[i];
    }
    else{
        xor0^=a[i];
    }
}
forn(i,q){
ll type;
cin>>type;
if(type==1){
   ll l,r;
   cin>>l>>r;
   l--;r--;
   xor0^=(l?preXor[r]^preXor[l-1]:preXor[r]);
   xor1^=(l?preXor[r]^preXor[l-1]:preXor[r]);
}
else{
  ll g;
  cin>>g;
  if(g){
    cout<<xor1<<" ";
  }
  else{
    cout<<xor0<<" ";
  }
}
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
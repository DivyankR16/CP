#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll a[n];
forn(i,n)cin>>a[i];
ll no1=0;
ll no11=0;
forn(i,n){
    if(a[i]==1){no1++;}
    else{
        no11++;
    }
}
if(no1>=no11){
  if(no11%2==0){
    cout<<0<<"\n";
  }
  else{
    cout<<1<<"\n";
  }
}
else{
ll ans=0;
ll sum=no1-no11;
while(sum<0){
    ans++;
    no1++;
    no11--;
    sum=no1-no11;
}
if(no11%2==0){
    cout<<ans<<"\n";
}
else{
    cout<<ans+1<<"\n";
}
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
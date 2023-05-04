#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll a[n];
forn(i,n)cin>>a[i];
if(n<=2){
    cout<<"YES"<<endl;
    return;}
if(n%2==0){
  bool check=true;
  for (ll i = 0; i < n-3; i++)
  { ll p1=max(a[i],a[i+1]);
    ll p2=min(a[i+2],a[i+3]);
    if(p1>p2){
      check=false;
      break;
    }
    i++;
    }
if(check)cout<<"YES"<<endl;
else cout<<"NO"<<endl;    
    }
else{
    bool check=true;
    ll ok=a[0];
    forn(i,n){
      ok=min(a[i],ok);
    }
    if(a[0]!=ok){
      cout<<"NO"<<endl;
      return;
    }
    if(a[0]==ok && n==3){
      cout<<"YES"<<endl;
      return;
    }
    for (ll i = 1; i < n-3; i++)
  { ll p1=max(a[i],a[i+1]);
    ll p2=min(a[i+2],a[i+3]);
    if(p1>p2){
      check=false;
      break;
    }
    i++;
    }
if(check)cout<<"YES"<<endl;
else cout<<"NO"<<endl;    

}}
int main(){
ll t;
cin>>t;
while(t--){
solve();
};
return 0;
}
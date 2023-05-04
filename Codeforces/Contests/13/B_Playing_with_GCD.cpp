#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll a[n];
forn(i,n)cin>>a[i];
ll val=a[0]*(n+1);
bool ans=true;
forn(i,n){
    val-=a[i];
    if(val%a[i]!=0){
      ans=false;
      break;
    }
}
if(ans)cout<<"YES"<<endl;
else cout<<"NO"<<endl;
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
};
return 0;
}
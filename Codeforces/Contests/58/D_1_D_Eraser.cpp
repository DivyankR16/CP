#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,k;
cin>>n>>k;
string s;
cin>>s;
ll i=0;
ll ans=0;
while(i<min(n,k)){
   if(s[i]=='B'){
      ans++;
   }
   i++;
}
if(ans>0)ans=1;
while(i<n){
    if(s[i]=='B')ans++;
    i++;
}
cout<<ans<<"\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
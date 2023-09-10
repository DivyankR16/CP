#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
string s;
cin>>s;
string ans="";
ll i=1;
ll prevIdx=0;
while(i<n){
  while(i<n && s[prevIdx]!=s[i])i++;
  ans+=s[prevIdx];
  i++;
  prevIdx=i;
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
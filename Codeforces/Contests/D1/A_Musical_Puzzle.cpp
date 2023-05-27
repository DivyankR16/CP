#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
string s;
cin>>s;
map<string,ll>mp;
forn(i,n-1){
    string str="";
    str+=s[i];
    str+=s[i+1];
    mp[str]++;
}
ll ans=0;
for(auto i:mp){
  ans++;
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
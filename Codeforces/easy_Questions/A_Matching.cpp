#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
string s;
cin>>s;
if(s[0]=='0'){
    cout<<0<<"\n";
    return;
}
ll ans=1;
for(ll i=0;i<s.length();i++){
    if(i==0 && s[i]=='?')ans*=9;
    if(i!=0 && s[i]=='?')ans*=10;
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
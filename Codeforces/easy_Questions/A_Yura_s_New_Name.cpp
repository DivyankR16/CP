#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
string s;
cin>>s;
if(s=="^"){
    cout<<1<<"\n";
    return;
}
ll ans=0;
if(s[0]=='_')ans++;
if(s[s.length()-1]=='_')ans++;
for(ll i=0;i<s.length()-1;i++){
    if(s[i]==s[i+1] && s[i]=='_')ans++;
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
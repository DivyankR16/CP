#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
string s;
cin>>s;
ll x;
cin>>x;
ll n=s.size();
string ans="";
forn(i,n){
    ans+='1';
}
forn(i,n){
    if(i-x>=0 && s[i]=='0'){
        ans[i-x]='0';
    }
    if(i+x<=(n-1) && s[i]=='0'){
        ans[i+x]='0';
    }
}
bool isPossible=true;
forn(i,n){
    ll val='0';
    if(((i-x)>=0 && ans[i-x]=='1') || ((i+x)<n && ans[i+x]=='1')){
        val='1';
    }
    if(s[i]!=val){
        isPossible=false;
        break;
    }
}
if(isPossible){
    cout<<ans<<"\n";
}
else{
    cout<<-1<<"\n";
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
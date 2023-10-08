#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
string s;
cin>>s;
ll n=s.size();
ll ans=0;
bool checkall=(s[0]=='B' || s[n-1]=='B');
forn(i,n-1){
    if(s[i]==s[i+1] && s[i]=='B'){
        checkall=true;
        break;
    }
}
vector<ll>cntA;
ll cur=0;
forn(i,n){
    if(s[i]=='A')cur++;
    else{
        if(cur)cntA.push_back(cur);
        cur=0;
    }
}
if(cur)cntA.push_back(cur);
sort(cntA.begin(),cntA.end());
if(!cntA.size()){
    cout<<0<<"\n";
    return;
}
if(checkall)ans+=cntA[0];
for(ll i=1;i<cntA.size();i++){
    ans+=cntA[i];
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
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
string s;
cin>>s;
ll n=s.length();
ll m;
cin>>m;
ll b[m];
forn(i,n)cin>>b[i];
ll cnt[26];
memset(cnt,0,sizeof(cnt));
forn(i,n){
    cnt[s[i]-'a']++;
}
string ans="";

}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
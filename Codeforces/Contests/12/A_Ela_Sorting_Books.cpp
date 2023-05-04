#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,k;
cin>>n>>k;
string s;
cin>>s;
ll n=s.length();
ll need=n/k;
map<char,ll>m;
forn(i,n){
    m[s[i]]++;
}
vector<char>v(26);
forn(i,n){
    v[i]='a'+i;
}
string ans="";
forn(i,k){
 
}
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
};
return 0;
}
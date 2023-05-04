#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
string s;
cin>>s;
ll n=s.length();
if(n==1){
    cout<<s<<endl;
    return;
}
string ans="";
ll i=0;
for ( i = 0; i < n-1; i++)
{  if(s[i]!=s[i+1]){
    ans+=s[i];
}
else{
    i++;
}}
if(i<n)ans+=s[i];
map<char,ll>m;
for (ll i = 0; i < ans.length(); i++)
{
    m[ans[i]]++;
}
for(auto i:m){
    if(i.second){
        cout<<i.first;
    }
}
cout<<endl;
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
};
return 0;
}
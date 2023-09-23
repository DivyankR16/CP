#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
string s;
cin>>s;
ll a[26];
forn(i,26){
    a[i]=0;
}
forn(i,n){
    a[s[i]-'a']++;
}
for(ll i=25;i>=0;i--){
   if(a[i]){
    cout<<i+1<<"\n";
    return;
   }
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
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,k;
cin>>n>>k;
string s,t;
cin>>s;
cin>>t;
vector<ll>check(26);
bool need=1;
forn(i,n){
   if((i-k)<0 && (i+k)>(n-1)){
    need= need && (s[i]==t[i]);
   }
   else{
    check[s[i]-'a']++;
    check[t[i]-'a']--;
   }
}
if(need && check==vector<ll>(26)){
    cout<<"YES"<<"\n";
}
else{
    cout<<"NO"<<"\n";
}
}
signed main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);cout.tie(NULL);
ll t;
cin>>t;
while(t--){
solve();
};
return 0;
}
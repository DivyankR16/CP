#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll k;
cin>>k;
string ans="";
while(k){
   ans+=((k%9)+'0');
   k/=9;
}
reverse(ans.begin(),ans.end());
ll n=ans.size();
forn(i,n){
   if((ans[i]-'0')>=4){
    ans[i]+=1;
   }
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
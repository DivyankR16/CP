#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
string s;
cin>>s;
ll ans=0;
set<char>s1;
forn(i,s.length())
{s1.insert(s[i]);
  if(s1.size()>3){
  s1.clear();
  ans++;
  s1.insert(s[i]);
}
}
if(!s1.size()){
   cout<<ans<<endl;
}
else{cout<<ans+1<<endl;}
}
int main(){
int t;
cin>>t;
while(t--){
solve();
};
return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
string s;
cin>>s;
ll ans=0;
ll i=0;
while(i<n-1){
  bool check=false;
  ans++;
  while(i<=(n-3) && (ll)s[i]+(ll)s[i+1]==(ll)s[i+1]+(ll)s[i+2]){i++;
  check=true;}
  i++;
}
cout<<ans<<"\n";
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
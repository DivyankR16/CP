#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
string s,e;
cin>>s;
cin>>e;
ll ans=0;
forn(i,n){
   if(e[i]>=s[i]){
    ans+=min((ll)(e[i]-s[i]),(ll)9+(ll)(s[i]-e[i])+1);
   }
   else{
    ans+=min((ll)(s[i]-e[i]),(ll)9+(ll)(e[i]-s[i])+1);
   }
}
cout<<ans<<"\n";
}
int main(){
solve();
return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
string s;
cin>>s;
ll n=s.length();
ll ans=LONG_LONG_MAX;
for(char c='a';c<='z';c++){
    ll maxCntOf0=0;
    ll i=0;
    while(i<n){
        ll cnt=0;
        while(i<n && s[i]!=c){
            cnt++;
            i++;
        }
        maxCntOf0=max(maxCntOf0,cnt);
        i++;
    }
   ll cnter=0;
   while((1<<cnter)<=maxCntOf0)cnter++;
   ans=min(ans,cnter);
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
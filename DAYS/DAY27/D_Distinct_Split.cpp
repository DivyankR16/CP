#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
string s;
cin>>s;
ll cnt1[26];
ll cnt2[26];
memset(cnt1,0,sizeof(cnt1));
memset(cnt2,0,sizeof(cnt2));
forn(i,n){
    cnt1[s[i]-'a']++;
}
ll ans=0;
forn(i,26){
    if(cnt1[i])ans++;
}
forn(i,n){
    cnt1[s[i]-'a']--;
    cnt2[s[i]-'a']++;
    ll c1=0;
    ll c2=0;
    forn(j,26){
       if(cnt1[j])c1++;
       if(cnt2[j])c1++;
    }
    ans=max(ans,c1+c2);
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
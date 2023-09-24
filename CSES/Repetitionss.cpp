#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
string s;
cin>>s;
ll n=s.size();
ll ans=0;
ll i=0;
while(i<n){
    ll cnt=1;
    while(i<n-1 && s[i]==s[i+1]){
        i++;
        cnt++;
    }
    ans=max(ans,cnt);
    if(cnt==1)i++;
}
cout<<ans<<"\n";
}
int main(){
solve();
return 0;
}
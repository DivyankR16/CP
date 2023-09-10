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
while(i<n && s[i]=='0')i++;
while(i<n){
    ll cnt=0;
    while(i<n && s[i]=='1'){
         cnt++;
         i++;
    }
    if(cnt){
        ans+=(cnt-1);
    }
    i++;
}
ll ans2=0;
i=0;
while(i<n && s[i]=='1')i++;
while(i<n){
    ll cnt=0;
    while(i<n && s[i]=='0'){
        cnt++;
        i++;
    }
    if(cnt){
        ans2+=(cnt-1);
    }
    i++;
}
cout<<max(ans,ans2)<<"\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
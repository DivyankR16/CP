#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
string L,R;
cin>>L>>R;
if(L.size()<R.size()){
    ll ans=0;
    forn(i,R.size()){
        if(i==0){
            ans+=(R[i]-'0');
        }
        else{
            ans+=9;
        }
    }
    cout<<ans<<"\n";
}
else if(L[0]<R[0]){
    ll ans=0;
    forn(i,R.size()){
        if(i==0){
            ans+=(R[i]-L[i]);
        }
        else{
            ans+=9;
        }
    }
    cout<<ans<<"\n";
}
else{
    ll ans=0;
    ll i=0;
    ll n=R.size();
    while(L[i]==R[i])i++;
    if(i<n){
    ans+=(n-i-2)*9+9;
    ans+=R[i]-L[i];}
    cout<<ans<<"\n";
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
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
 ll a[n];
 forn(i,n)cin>>a[i];
 string s;
 cin>>s;
 ll dp[n];
 memset(dp,0,sizeof(dp));
 dp[0]=a[0];
 for(ll i=1;i<n;i++){
    dp[i]=dp[i-1]^a[i];
 }
 ll xor0=-1;
 ll xor1=-1;
 forn(i,n){
    if(s[i]==1){
        if(xor1==-1){
            xor1=a[i];
        }
        else{
            xor1^=a[i];
        }
    }
    else{
        if(xor0==-1){
            xor0=a[i];
        }
        else{
            xor0^=a[i];
        }
    }
 }
 
 ll q;
 cin>>q;
 forn(i,q){
    ll type;
    cin>>type;
    if(type==1){
        ll l,r;
        cin>>l>>r;

    }
    else{
        ll g;
        cin>>g;

    }
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
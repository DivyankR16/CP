#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll a[n];
forn(i,n)cin>>a[i];
ll ck=a[0];
for(ll i=1;i<n;i++){
   ck=__gcd(ck,a[i]);
}
if(ck!=1){
    cout<<-1<<"\n";
}
else{
    // ll dp[n];
    // forn(i,n){
    //     dp[i]=INT_MAX;
    // }
    ll mkc=INT_MAX;
    forn(i,n){
      ll j=i+1;
      ll ok=a[i];
      ll cnt=0;
      while(j<n && ok!=1){
        ok=__gcd(ok,a[j]);
        j++;
        cnt++;
      }
      if(ok==1)mkc=min(mkc,cnt);
    }
    // forn(k,n)mkc=min(mkc,dp[k]);
    if(mkc==0){
        ll noofones=0;
        forn(k,n){
           if(a[k]==1)noofones++;
        }
        cout<<n-noofones<<"\n";
    }
    else{
        cout<<mkc+n-1<<"\n";
    }
}
}
int main(){
solve();
return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,m;
cin>>n>>m;
ll a[m];
ll cnt[101];
memset(cnt,0,sizeof(cnt));
forn(i,m){cin>>a[i];
  cnt[a[i]]++;
}
for(ll i=100;i>=1;i--){
    ll k=0;
    for(ll j=1;j<=100;j++){
      k+=cnt[j]/i;
    }
    if(k>=n){
      cout<<i<<"\n";
      return;
    }
}
cout<<0<<"\n";
}
int main(){
solve();
return 0;
}
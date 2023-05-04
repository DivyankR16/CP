#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll un=0;
ll k=0;
ll ans=0;
forn(i,n){
    ll b;
    cin>>b;
    if(b==1){
      un++;
    }
    else if(b==2){
        k+=un;
        un=0;
    }
    ans=max(ans,un+(k?k/2+1:0));
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
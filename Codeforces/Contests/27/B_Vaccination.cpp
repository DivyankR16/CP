#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,k,d,w;
cin>>n>>k>>d>>w;
ll a[n];
forn(i,n)cin>>a[i];
ll time=-1;
ll cnt=0;
ll ans=0;
forn(i,n){
     if(a[i]<= time && cnt>0){
          cnt--;
     }
     else{
        time=a[i]+w+d;
        cnt=k-1;
        ans++;
     }
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
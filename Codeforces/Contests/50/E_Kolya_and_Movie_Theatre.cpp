#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,m,d;
cin>>n>>m>>d;
ll a[n];
forn(i,n)cin>>a[i];
multiset<ll>ms;
ll sum=0;
ll need[n];
forn(i,n){
    if(a[i]>0){
    sum+=a[i];
    ms.insert(a[i]);
    if(ms.size()>m-1){
        sum-=(*ms.begin());
        ms.erase(ms.begin());
    }
    }
    need[i]=sum;
}
ll ans=0;
forn(i,n){
    if(i){
   ans=max(ans,need[i-1]+a[i]-(i+1)*d);}
   else{
    ans=max(ans,a[i]-d);
   }
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
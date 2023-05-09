#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll a[n];
forn(i,n)cin>>a[i];
//aj-j=ai-i
unordered_map<ll,ll>m;
forn(i,n){
    m[a[i]-i]++;
}
ll ans=0;
for(auto i:m){
  ans+=(i.second*(i.second-1)/2);
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
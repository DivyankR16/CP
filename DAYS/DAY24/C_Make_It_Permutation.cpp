#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,c,d;
cin>>n>>c>>d;
ll a[n];
forn(i,n)cin>>a[i];
map<ll,ll>cnt;
forn(i,n){
    cnt[a[i]]++;
}
ll ans=0;
vector<ll>v;
for(auto i:cnt){
    ans+=(i.second-1)*c;
    i.second=1;
    v.push_back(i.first);
}
ll need=0;
ll sz=v.size();
need+=v[0]-1;
forn(i,sz-1){
  need+=v[i+1]-v[i]-1;
}
ll grandAns=ans+need*d;
ll removed=0;
for(ll i=sz-1;i>=1;i--){
    need-=v[i]-v[i-1]-1;
    removed++;
    grandAns=min(grandAns,ans+need*d+removed*c);
}
need-=v[0]-1;
removed++;
grandAns=min(grandAns,ans+need*d+removed*c+d);
cout<<grandAns<<"\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
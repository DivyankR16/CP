#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll a[n];
forn(i,n)cin>>a[i];
vector<pair<ll,ll>>v;
forn(i,n){
    v.push_back({a[i],i});
}
sort(v.begin(),v.end());
ll ans=n;
forn(i,n){
    v[i].first=ans;
    ans--;
}
ll ck[n];
forn(i,n){
    ck[v[i].second]=v[i].first;
}
forn(i,n){
    cout<<ck[i]<<" ";
}cout<<"\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
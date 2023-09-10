#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll a[n];
forn(i,n)cin>>a[i];
ll sm=0;
forn(i,n)sm+=a[i];
vector<pair<ll,ll>>vk(n);
forn(i,n){
    vk[i].first=a[i];
    vk[i].second=i;
}
sort(vk.begin(),vk.end());
ll vals=0;
vector<pair<ll,ll>>ans(n);
forn(i,n){
    ans[i].first=vk[i].second;
    ans[i].second=sm-(n-i)*(vk[i].first-1)+(i)*(vk[i].first+1)-vals;
    sm-=vk[i].first;
    vals+=vk[i].first;
}
sort(ans.begin(),ans.end());
forn(i,n){
    cout<<ans[i].second<<" ";
}
cout<<"\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
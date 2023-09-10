#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
struct custom_hash {
static uint64_t splitmix64(uint64_t x) {
x += 0x9e3779b97f4a7c15;
x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
return x ^ (x >> 31);
}
size_t operator()(uint64_t x) const {
static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
return splitmix64(x + FIXED_RANDOM);
}
};
void solve(){
ll n;
cin>>n;
unordered_map<ll,ll,custom_hash>dxplusy;
unordered_map<ll,ll,custom_hash>dxminusy;
unordered_map<ll,ll,custom_hash>dxeq;
unordered_map<ll,ll,custom_hash>dyeq;
forn(i,n){
    ll x,y;
    cin>>x>>y;
    dxplusy[x+y]++;
    dxminusy[x-y]++;
    dxeq[x]++;
    dyeq[y]++;
}
ll ans=0;
for(auto i:dxplusy){
    ans+=i.second*(i.second-1);
}
for(auto i:dxminusy){
    ans+=i.second*(i.second-1);
}
for(auto i:dxeq){
    ans+=i.second*(i.second-1);
}
for(auto i:dyeq){
    ans+=i.second*(i.second-1);
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
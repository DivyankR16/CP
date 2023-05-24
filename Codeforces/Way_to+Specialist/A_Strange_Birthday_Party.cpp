#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,m;
cin>>n>>m;
ll k[n];
forn(i,n)cin>>k[i];
ll c[m];
forn(i,m)cin>>c[i];
unordered_map<ll,ll>mp;
forn(i,n){
    mp[k[i]]++;
}
vector<pair<ll,ll>>vp;
forn(i,m){
    vp.push_back({c[i],i+1});
}
sort(vp.begin(),vp.end());
bool isAvailablePresent[m];
forn(i,m)isAvailablePresent[i]=1;
ll ans=0;
for(ll i=m-1;i>=0;i--){
    ll val=mp[vp[i].second];
    while(val){
        bool check=false;
        for(ll j=0;j<m;j++){
            if(isAvailablePresent[j] && vp[j].second<vp[i].second){
                ans+=vp[j].first;
                isAvailablePresent[j]=0;
                check=true;
                break;
            }
        }
        if(!check){
            ans+=vp[i].first;
        }
        val--;
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
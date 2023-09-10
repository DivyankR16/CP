#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll a[n],b[n];
forn(i,n)cin>>a[i];
forn(i,n)cin>>b[i];
vector<pair<ll,ll>>v(n);
forn(i,n){
    v[i].first=a[i]-b[i];
    v[i].second=i+1;
}
sort(v.begin(),v.end());
vector<ll>need;
ll ans=1;
need.push_back(v[v.size()-1].second);
for(ll i=v.size()-1;i>=1;i--){
    if(v[i].first==v[i-1].first){
        ans++;
        need.push_back(v[i-1].second);
    }
    else{
        break;
    }
}
cout<<ans<<"\n";
sort(need.begin(),need.end());
forn(i,need.size()){
    cout<<need[i]<<" ";
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
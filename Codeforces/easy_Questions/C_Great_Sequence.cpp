#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,x;
cin>>n>>x;
ll a[n];
forn(i,n)cin>>a[i];
map<ll,ll>m;
forn(i,n){
    m[a[i]]++;
}
vector<pair<ll,ll>>v;
for(auto i:m){
    v.push_back(make_pair(i.first,i.second));
}
map<ll,ll>:: iterator itr=m.begin();
for(itr=m.begin();itr!=m.end();itr++){
    if(m.find(itr->first*x)!=m.end()){
        auto k=m.find(itr->first*x);
        if(k->second>itr->second){
            k->second-=itr->second;
            itr->second=0;
        }
        else{
           itr->second-=k->second;
           k->second=0;
        }
    }
}
ll ans=0;
for(auto i:m){
    ans+=i.second;
}
cout<<ans<<endl;
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
};
return 0;
}
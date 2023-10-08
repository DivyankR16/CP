#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,p;
cin>>n>>p;
ll a[n],b[n];
forn(i,n)cin>>a[i];
forn(i,n)cin>>b[i];
vector<pair<ll,ll>>v;
forn(i,n){
    v.push_back({b[i],a[i]});
}
sort(v.begin(),v.end());
if(v[0].first>=p){
    cout<<n*p<<"\n";
    return;
}
ll cost=p;
ll left=n-1;
forn(i,n){
    if(v[i].first<p){
        cost+=v[i].first*min(v[i].second,left);
        left-=min(left,v[i].second);
        if(!left)break;
    }
    else{
        cost+=left*p;
        break;
    }
}
cout<<cost<<"\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
vector<pair<ll,ll>>v;
forn(i,n){
    ll x,y;
    cin>>x>>y;
    v.push_back(make_pair(x,y));
}
sort(v.begin(),v.end());
set<ll>s;
ll suffix[n];
for(ll i=n-1;i>=0;i--){
    (i==n-1)?suffix[i]=v[i].second:suffix[i]=max(suffix[i+1],v[i].second);
}
ll ans=LONG_LONG_MAX;
forn(i,n){
    if(i==n-1){
        auto it=s.lower_bound(v[i].first);
        if(it!=s.end()){
        //if((*it)>suffix[i+1]){
            ans=min(ans,abs(v[i].first-(*it)));
        //}
    }
    if(it!=s.begin()){
        it--;
        //if((*it)>suffix[i+1]){
            ans=min(ans,abs(v[i].first-(*it)));
        //}
    }
    }
    else{
    ans=min(ans,abs(v[i].first-suffix[i+1]));
    auto it=s.lower_bound(v[i].first);
    if(it!=s.end()){
        if((*it)>suffix[i+1]){
            ans=min(ans,abs(v[i].first-(*it)));
        }
    }
    if(it!=s.begin()){
        it--;
        if((*it)>suffix[i+1]){
            ans=min(ans,abs(v[i].first-(*it)));
        }
    }
    // else{
    //     if((*it)<=suffix[i-1]){
    //         ans=min(ans,abs)
    //     }
    // }
    }
    s.insert(v[i].second);
}
cout<<ans<<"\n";
}
signed main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);cout.tie(NULL);
ll t;
cin>>t;
while(t--){
solve();
};
return 0;
}
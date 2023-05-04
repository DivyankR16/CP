#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,m;
cin>>n>>m;
vector<ll>a[m];
forn(i,n){
    forn(j,m){
        ll x;
        cin>>x;
        a[j].push_back(x);
    }
}
ll ans=0;
forn(i,m){
    sort(a[i].begin(),a[i].end());
    ll sum=0;
    forn(j,n){
        ans+=j*a[i][j]-sum;
        sum+=a[i][j];
    }
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
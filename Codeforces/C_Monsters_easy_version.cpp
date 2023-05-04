#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
vector<ll>ara;
for(ll i=0, x; i<n;i++) {
    cin>>x;
    ara.push_back(x);
}
sort(ara.begin(),ara.end());
ll pre=0;
ll ans=0;
for (ll i=0;i<n;i++) {
    ll dif=ara[i]-pre;
    if(dif>1) {
        ans+=dif-1;
    }
    ara[i]=min(pre+1,ara[i]);
    pre=ara[i];
}
cout<<ans<<endl;
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
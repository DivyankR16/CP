#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
multiset<ll>sk;
ll ans=0;
forn(i,n){
    ll x;
    cin>>x;
    if(x){
        sk.insert(x);
    }
    else{
        if(!sk.empty()){
           ans+=(*sk.rbegin());
           sk.erase(--sk.end());
        }
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
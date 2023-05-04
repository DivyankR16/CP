#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,q;
cin>>n>>q;
ll a[n];
forn(i,n)cin>>a[i];
ll sum=0;
forn(i,n){
    sum+=a[i];
}
sort(a,a+n,greater<ll>());
//vector<pair<ll,ll>>v;
//forn(i,n){
//    v.push_back(make_pair(a[i],i));
//}
for (ll i = 1; i < n; i++)
{
    a[i]+=a[i-1];
}
forn(i,q){
    ll x;
    cin>>x;
    if(x>sum){
        cout<<-1<<endl;
        continue;
    }
    ll ans=INT_MAX;
    ll l=0;
    ll r=n-1;
    while(l<=r){
        ll mid=(l+r)/2;
        if(x<=a[mid]){
           ans=mid;
           r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    cout<<ans+1<<endl;
}
//while(q--){
//   ll x;
//   cin>>x;
//   ll check=0;
//   ll i=n-1;
//   while(check<x){
//      
//   }
//}
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
};
return 0;
}
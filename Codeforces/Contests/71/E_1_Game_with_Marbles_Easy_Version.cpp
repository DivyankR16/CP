#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    ll a[n], b[n];
    forn(i, n) cin >> a[i];
    forn(i, n) cin >> b[i];
    vector<pair<ll, ll>> v;
    forn(i,n){
        v.push_back({a[i], b[i]});
    }
    sort(v.begin(), v.end(), [&](const pair<ll, ll> &x, const pair<ll, ll> &y) -> bool
         { return x.first + x.second > y.first + y.second; });
    ll ans = 0;
    forn(i,n){
        if(i%2==0){
            ans += v[i].first - 1;
        }
        else{
            ans -= v[i].second - 1;
        }
    }
    cout << ans << "\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
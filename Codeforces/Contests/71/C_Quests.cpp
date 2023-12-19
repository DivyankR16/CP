#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, k;
    cin >> n >> k;
    ll a[n], b[n];
    forn(i, n) cin >> a[i];
    forn(i, n) cin >> b[i];
    vector<pair<ll, ll>> v;
    forn(i,n){
        v.push_back({b[i], a[i]});
    }
        ll ans = 0;
        ll sum = 0;
        ll maxneed = 0;
        // sort(v.begin(), v.end());
        forn(i,n){
            if(k-(i+1)>=0){
            sum += v[i].second;
            maxneed = max(maxneed, v[i].first);
            ans = max(ans, sum+(k - (i + 1)) * maxneed);
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
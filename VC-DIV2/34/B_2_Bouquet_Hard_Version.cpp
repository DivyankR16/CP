#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, m;
    cin >> n >> m;
    ll a[n];
    forn(i, n) cin >> a[i];
    ll c[n];
    forn(i, n) cin >> c[i];
    vector<pair<ll, ll>> v;
    forn(i,n){
        v.push_back({a[i], c[i]});
    }
    ll ans = 0;
    sort(v.begin(),v.end());
    for (ll i = 0; i < n - 1;i++){
        if(v[i].first+1==v[i+1].first){
            ll a = v[i].first;
            ll b = v[i+1].first;
            ll cnta = v[i].second;
            ll cntb = v[i+1].second;
            if(a*cnta+b*cntb<=m){
                ans = max(ans, a * cnta + b * cntb);
                continue;
            }
            ll k1 = min(cnta, m / a);
            ll k2 = min(cntb, (m - k1 * a) / b);
            ll left = m - k1 * a - k2 * b;
            ll r = min({k1, cntb - k2, left});
            ans = max(ans, (k1 - r) * a + (k2 + r) * b);
        }
        else{
            ll a = v[i].first;
            ll cnta = v[i].second;
            ans = max(ans, min(m / a, cnta) * a);
        }
    }
    ans = max(ans, min(m / v[n - 1].first, v[n - 1].second) * v[n - 1].first);
    cout << ans << "\n";
}
int main(){
ios_base:: sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
// void solve(){
//     ll h,n;
//     cin >> h>>n;
//     ll a[n], c[n];
//     forn(i, n) cin >> a[i];
//     forn(i, n) cin >> c[i];
//     ll ans = __LONG_LONG_MAX__;
//     ll l = 0;
//     ll r = 1e12;
//     while(l<=r){
//         ll m = l + (r - l) / 2;
//         ll d = 0;
//         for (ll i = 0; i < n;i++){
//             d += a[i] * (m/c[i]+1);
//             if (d >= h)
//             {
//                 ans = min(ans, m + 1);
//                 r = m - 1;
//                 break;
//             }
//         }
//         if(d>=h){
//             ans = min(ans, m+1);
//             r = m - 1;
//         }
//         else{
//             l = m + 1;
//         }
//     }
//     cout << ans << "\n";
// }
void solve()
{
    ll h, n;
    cin >> h >> n;
    ll a[n], c[n];
    forn(i, n) cin >> a[i];
    forn(i, n) cin >> c[i];
    set<pair<ll, ll>> s;
    forn(i,n){
        s.insert({1, i});
    }
    ll ans = 1;
    while(h>0){
        auto p = *s.begin();
        ll t = p.first;
        ll i = p.second;
        h -= a[i];
        s.erase(s.begin());
        ans = t;
        s.insert({t + c[i], i});
    }
    cout << ans << "\n";
}
int main(){
ios_base:: sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
ll t;
cin>>t;
while(t--){
    // cout << "tc" << "\n";
    solve();
}
return 0;
}
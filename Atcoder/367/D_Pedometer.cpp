#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, m;
    cin >> n >> m;
    ll a[n];
    forn(i, n) cin >> a[i];
    vector<ll> p;
    p.push_back(0);
    for (ll i = 0; i < 2 * n;i++){
        p.push_back((p.back() + a[i % n]) % m);
    }
    vector<ll> cnt(m, 0);
    for (ll i = 0; i < n;i++){
        cnt[p[i]]++;
    }
    ll ans = 0;
    for (ll i = n; i <= 2 * n - 1;i++){
        cnt[p[i - n]]--;
        ans += cnt[p[i]];
        cnt[p[i]]++;
    }
    cout << ans << "\n";
}
int main(){
ios_base:: sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
solve();
return 0;
}
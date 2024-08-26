#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, m;
    cin >> n >> m;
    ll val = n;
    vector<pair<ll, ll>> v;
    ll k = 0;
    while(val--){
        ll l;
        cin >> l;
        vector<ll> a;
        vector<ll> vis(l + 2, 0);
        forn(j,l){
            ll x;
            cin >> x;
            a.push_back(x);
            if(x<=l+1){
                vis[x] = 1;
            }
        }
        ll mex = 0;
        while(vis[mex]){
            mex++;
        }
        ll sm = mex;
        vis[sm] = 1;
        while(vis[mex]){
            mex++;
        }
        ll sm2 = mex;
        k = max(k, sm2);
        v.push_back({sm, sm2});
    }
    ll ans = 0;
    if(m>k){
        ans += m * (m + 1) / 2;
        ans -= k * (k + 1) / 2;
        m = k;
    }
    vector<vector<ll>> g(k+1);
    for(auto p:v){
        ll u = p.first;
        ll v = p.second;
        g[u].push_back(v);
        for (ll i = 0; i < u;i++){
            g[i].push_back(u);
        }
    }
    vector<ll> dp(k+1, 0);
    for (ll i = k; i >= 0;i--){
        dp[i] = max(dp[i], i);
        for(auto e:g[i]){
            dp[i] = max(dp[i], dp[e]);
        }
    }
    ll mx = 0;
    for(auto p:v){
        ll u = p.first;
        mx = max(mx, dp[u]);
    }
    for (ll i = 0; i <= k;i++){
        dp[i] = max(dp[i], mx);
    }
    for (ll i = 0; i <= m;i++){
        ans += dp[i];
    }
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
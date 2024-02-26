#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
const ll N = 3e5 + 5;
const ll mod = 998244353;
ll dp[N];
vector<ll> adj[N];
void dfs(ll u, ll b,ll &ans)
{
    ans++;
    dp[u] = 1;
    for (auto v : adj[u])
    {
        if (v == b)continue;
        dfs(v, u,ans);
        ans += dp[v] - 1;
        dp[u] *= dp[v];
        dp[u] %= mod;
    }
    dp[u]++;
}
void solve(){
    ll n;
    cin >> n;

    for (ll i = 1; i <= n; i++){
        adj[i].clear();}

    for (ll i = 1; i <= n;i++){
        dp[i] = 0;
    }
    ll ans = 0;

    for (ll i = 1; i < n; i++)
    {
        ll u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(1,-1,ans);

    ans += dp[1];
    ans -= n;

    ans %= mod;
    if (ans < 0)
        ans += mod;

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
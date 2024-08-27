#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (ll i = 0; i < n; i++)
void solve()
{
    ll n;
    cin >> n;
    ll a[n][n][n];
    forn(i, n)
    {
        forn(j, n)
        {
            forn(k, n)
            {
                cin >> a[i][j][k];
            }
        }
    }
    ll q;
    cin >> q;
    vector<vector<vector<ll>>> dp(n + 1, vector<vector<ll>>(n + 1, vector<ll>(n + 1, 0)));
    for (ll i = 1; i <= n; i++)
    {
        for (ll j = 1; j <= n; j++)
        {
            for (ll k = 1; k <= n; k++)
            {
                dp[i][j][k] += dp[i - 1][j][k] + dp[i][j - 1][k] + dp[i][j][k - 1] - dp[i][j - 1][k - 1] - dp[i - 1][j - 1][k] - dp[i - 1][j][k - 1] + a[i - 1][j - 1][k - 1] + dp[i - 1][j - 1][k - 1];
            }
        }
    }
    while (q--)
    {
        ll lx, rx, ly, ry, lz, rz;
        cin >> lx >> rx >> ly >> ry >> lz >> rz;
        cout << dp[rx][ry][rz] - dp[lx - 1][ry][rz] - dp[rx][ly - 1][rz] - dp[rx][ry][lz - 1] + dp[lx - 1][ly - 1][rz] + dp[lx - 1][ry][lz - 1] + dp[rx][ly - 1][lz - 1] - dp[lx - 1][ly - 1][lz - 1] << "\n";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}
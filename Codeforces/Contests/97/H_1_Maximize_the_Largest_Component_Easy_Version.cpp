#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (ll i = 0; i < n; i++)
vector<vector<char>> a;
vector<vector<bool>> vis;
ll mnr;
ll mnc;
ll mxr;
ll mxc;
ll cnt;
void dfs(ll i, ll j, ll n, ll m)
{
    if (i < 0 || i >= n || j < 0 || j >= m || vis[i][j] || a[i][j] == '.')
    {
        return;
    }
    vis[i][j] = 1;
    cnt++;
    mnr = min(mnr, i);
    mnc = min(mnc, j);
    mxr = max(mxr, i);
    mxc = max(mxc, j);
    dfs(i - 1, j, n, m);
    dfs(i, j - 1, n, m);
    dfs(i + 1, j, n, m);
    dfs(i, j + 1, n, m);
}
void solve()
{
    ll n, m;
    cin >> n >> m;
    vis.assign(n, vector<bool>(m, 0));
    forn(i, n)
    {
        vector<char> temp;
        forn(j, m)
        {
            char c;
            cin >> c;
            temp.push_back(c);
        }
        a.push_back(temp);
    }
    vector<ll> rowI, colI;
    rowI.assign(n + 1, 0);
    colI.assign(m + 1, 0);
    forn(i, n)
    {
        forn(j, m)
        {
            if (vis[i][j] || a[i][j] == '.')
            {
                continue;
            }
            mnr = LONG_MAX;
            mnc = LONG_MAX;
            mxr = LONG_MIN;
            mxc = LONG_MIN;
            cnt = 0;
            dfs(i, j, n, m);
            mnr = max(0ll, mnr - 1);
            mnc = max(0ll, mnc - 1);
            mxr = min(n - 1, mxr + 1);
            mxc = min(m - 1, mxc + 1);
            rowI[mnr] += cnt;
            rowI[mxr + 1] -= cnt;
            colI[mnc] += cnt;
            colI[mxc + 1] -= cnt;
        }
    }
    ll ans = 0;
    forn(i, n)
    {
        if (i)
        {
            rowI[i] += rowI[i - 1];
        }
        ll val = 0;
        forn(j, m)
        {
            if (a[i][j] == '.')
            {
                val++;
            }
        }
        ans = max(ans, val + rowI[i]);
    }
    forn(i, m)
    {
        if (i)
        {
            colI[i] += colI[i - 1];
        }
        ll val = 0;
        forn(j, n)
        {
            if (a[j][i] == '.')
            {
                val++;
            }
        }
        ans = max(ans, val + colI[i]);
    }
    cout << ans << "\n";
    a.clear();
    vis.clear();
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
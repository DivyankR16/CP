#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (ll i = 0; i < n; i++)
void solve()
{
    ll n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    ll a[m];
    forn(i, m) cin >> a[i];
    string c;
    cin >> c;
    sort(c.begin(), c.end());
    reverse(c.begin(), c.end());
    vector<ll> mark(n, 0);
    for (ll i = 0; i < m; i++)
    {
        mark[a[i] - 1] = 1;
    }
    map<ll, ll> mp;
    for (ll i = 0; i < n; i++)
    {
        if (mark[i])
        {
            mp[i] = c.back();
            c.pop_back();
        }
    }
    for (ll i = 0; i < n; i++)
    {
        if (mark[i])
        {
            s[i] = mp[i];
        }
    }
    cout << s << "\n";
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
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (ll i = 0; i < n; i++)
void solve()
{
    ll n, m;
    cin >> n >> m;
    ll a[n + m + 1];
    ll b[n + m + 1];
    forn(i, n + m + 1) cin >> a[i];
    forn(i, n + m + 1) cin >> b[i];
    pair<ll, ll> p1;
    pair<ll, ll> p2;
    p1 = {0, 0};
    p2 = {0, 0};
    vector<bool> m1(n + m + 1);
    vector<bool> m2(n + m + 1);
    for (ll i = 0; i < n + m + 1; ++i)
    {
        if (a[i] > b[i] && p1.second <= n)
        {
            p1.first += a[i];
            p1.second += 1;
            m1[i] = 1;
        }
        else if (a[i] < b[i] && p2.second < m)
        {
            p1.first += b[i];
            p2.second += 1;
            m1[i] = 0;
        }
        else if (p1.second <= n)
        {
            p1.first += a[i];
            p1.second += 1;
            m1[i] = 1;
        }
        else
        {
            p1.first += b[i];
            p2.second += 1;
            m1[i] = 0;
        }
    }

    p2.second = 0;
    p1.second = 0;

    for (ll i = 0; i < n + m + 1; ++i)
    {
        if (a[i] < b[i] && p2.second <= m)
        {
            p2.first += b[i];
            p2.second += 1;
            m2[i] = 0;
        }
        else if (a[i] > b[i] && p1.second < n)
        {
            p2.first += a[i];
            p1.second += 1;
            m2[i] = 1;
        }
        else if (p2.second <= m)
        {
            p2.first += b[i];
            p2.second += 1;
            m2[i] = 0;
        }
        else
        {
            p2.first += a[i];
            p1.second += 1;
            m2[i] = 1;
        }
    }
    ll ans = 0;
    for (ll i = 0; i < n + m + 1; ++i)
    {
        if (m1[i] == 1)
        {
            cout<<p1.first - a[i]<<" ";
        }
        else if (m2[i] == 0)
        {
            cout<<p2.first - b[i]<<" ";
        }
    }
    cout << endl;
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
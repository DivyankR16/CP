#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (ll i = 0; i < n; i++)
void solve()
{
    ll n, c;
    cin >> n >> c;
    vector<ll> a(n + 1);
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
        a[i] += i;
    }

    sort(a.begin() + 1, a.end());
    ll ans = 0;
    for (ll i = 1; i <= n; i++)
    {
        if (a[i] <= c)
        {
            c -= a[i];
            ans++;
        }
        else
        {
            break;
        }
    }

    cout << ans << endl;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
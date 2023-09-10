#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (ll i = 0; i < n; i++)
void solve()
{
    ll n, k;
    cin >> n >> k;
    ll a[n];
    forn(i, n) { cin >> a[i]; }
    vector<pair<ll, ll>> v(n);
    forn(i, n)
    {
        v[i].first = ((a[i] % k)) ? (a[i] % k) : k;
        v[i].second = i;
    }
    sort(v.begin(), v.end());
    ll i = n - 1;
    while (i >= 0)
    {
        vector<ll> need;
        need.push_back(v[i].second);
        while (i > 0 && v[i].first == v[i - 1].first)
        {
            need.push_back(v[i - 1].second);
            i--;
        }
        sort(need.begin(), need.end());
        forn(j, need.size())
        {
            cout << need[j] + 1 << " ";
        }
        i--;
    }
    cout << "\n";
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
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (ll i = 0; i < n; i++)
void solve()
{
    ll n, m, q;
    cin >> n >> m >> q;
    vector<ll> b;
    forn(i, m)
    {
        ll x;
        cin >> x;
        b.push_back(x);
    }
    sort(b.begin(), b.end());
    while (q--)
    {
        ll x;
        cin >> x;
        auto it = upper_bound(b.begin(), b.end(), x);
        ll bv = -1;
        if(it!=b.end()){
            bv = *it;
        }
        ll av = -1;
        if(it!=b.begin()){
            it--;
            av = *it;
        }
        if (av ==-1)
        {
            cout << bv - 1 << "\n";
        }
        else if(bv==-1)
        {
            cout << n - av << "\n";
        }
        else
        {
            ll a1 = max(x - av, bv - x);
            ll a2 = min(x - av, bv - x);
            ll ans = (a1 - a2) / 2;
            a1 -= 2 * ans;
            cout << ans + min(a1, a2) << "\n";
        }
    }
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
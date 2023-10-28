#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (ll i = 0; i < n; i++)
void solve()
{
    ll n, m;
    cin >> n >> m;
    ll a[n-1];
    for (ll i = 0; i < n-1; i++)
    {
        cin >> a[i];
    }
    vector<ll> b;
    forn(i, n)
    {
        ll x;
        cin >> x;
        b.push_back(x);
    }
    sort(b.begin(), b.end());
    sort(a, a + n-1);
    ll ans = 0;
    for (ll i = 0; i < n-1; i++)
    {
        auto it = upper_bound(b.begin(), b.end(), a[i]);
        if (it != b.end())
        {
            b.erase(it);
        }
        else
        {
            ans++;
            b.erase(b.begin());
        }
    }
    // for(auto i:b){
    //     cout <<"b "<< i << " ";
    // }
    // cout << "\n";
    // cout <<"need "<< ans << "\n";
    ll ele = b[b.size() - 1];
    if (m >= ele)
    {
        cout << (ans) * max(0ll, (ele - 1)) + (m - ele + 1) * (ans+1) << "\n";
    }
    else
    {
        cout << (ans) * m << "\n";
    }
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
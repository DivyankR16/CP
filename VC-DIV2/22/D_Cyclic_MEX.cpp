#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (ll i = 0; i < n; i++)
ll mex(const vector<ll> &arr)
{
    set<ll> s(arr.begin(), arr.end());
    ll mex_val = 0;
    while (s.count(mex_val))
    {
        mex_val++;
    }
    return mex_val;
}

ll max_cost_cyclic_shift(int n, const vector<ll> &p)
{
    ll max_cost = 0;
    vector<ll> current_prefix;

    for (int i = 0; i < n * 2; i++)
    {
        current_prefix.push_back(p[i % n]);
        ll current_mex = mex(current_prefix);
        max_cost = max(max_cost, current_mex);
    }

    return max_cost;
}
void solve(){
    ll n;
    cin >> n;

    vector<ll> p(n);
    for (int j = 0; j < n; j++)
    {
        cin >> p[j];
    }

    ll result = max_cost_cyclic_shift(n, p);
    cout << result << endl;
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

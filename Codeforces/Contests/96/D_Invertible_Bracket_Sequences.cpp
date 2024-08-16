#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (ll i = 0; i < n;i++)
vector<ll> tree;
ll build(vector<ll>&a){
    ll n = a.size();
    while(__builtin_popcountll(n)!=1){
        n++;
        a.push_back(0);
    }
    forn(i,n){
        tree[i + n] = a[i];
    }
    for (ll i = n - 1; i >= 1;i--){
        tree[i] = tree[2 * i] + tree[2 * i + 1];
    }
    return n;
}
ll query(ll node,ll segleft,ll segright,ll qleft,ll qright){
    if(qleft>segright || qright<segleft){
        return 0;
    }
    if(qleft<=segleft && segright<=qright){
        return tree[node];
    }
    ll mididx = segleft + (segright - segleft) / 2;
    
}
void solve()
{
    string s;
    cin >> s;

    ll n = s.size();

    vector<ll> p(n + 2);
    vector<vector<ll>> ind(n + 5);

    for (ll i = 1; i <= n; i += 1)
    {
        ll x = 1;
        if (s[i - 1] == ')')
            x = -1;
        p[i] = x + p[i - 1];
        ind[p[i]].push_back(i);
    }

    set<ll> st;

    st.insert(n + 1);

    ll ans = 0;

    for (ll i = n, k = n; i >= 0; i--)
    {
        while (k > 2 * i)
        {
            for (ll x : ind[k])
            {
                st.insert(x);
            }
            k--;
        }
        auto &v = ind[i];
        ll sz = v.size();
        if (sz == 0)
            continue;
        for (ll j = 0; j < sz; j += 1)
        {
            ll x = ind[i][j];
            ll till = *st.upper_bound(x);
            ll lo = j, hi = sz;
            while (hi - lo > 1)
            {
                ll mid = lo + (hi - lo) / 2;
                if (v[mid] < till)
                    lo = mid;
                else
                    hi = mid;
            }
            ans += (lo - j);
        }
    }

    cout << ans << '\n';
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tests = 1;
    cin >> tests;

    for (int i = 0; i < tests; i += 1)
    {
        solve();
    }
}
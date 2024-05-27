#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (ll i = 0; i < n; i++)
#define MOD 1000000007

bool el(ll x, ll y, ll limit) {
    ll lcm = (x * y) / __gcd(x, y);
    return lcm > limit;
}
void uc(ll &cur, ll &len, ll val, const map<ll, ll> &m) {
    len += m.at(val);
    cur = (cur * val) / __gcd(cur, val);
}
ll solver(const vector<ll> &u, const map<ll, ll> &m, ll n) {
    ll maxLen = 0;
    bool terminatedEarly = false;

    for (int i = u.size() - 1; i >= 0 && !terminatedEarly; --i) {
        ll cur = u[i];
        ll len = m.at(cur);
        bool exc = false;

        for (int j = i - 1; j >= 0; --j) {
            if (el(cur, u[j], u.back())) {
                exc = true;
                len = n;
                j = -1;
            } else {
                ll lcm = cur * u[j] / __gcd(cur, u[j]);
                if (m.find(lcm) == m.end() || lcm == cur) {
                    uc(cur, len, u[j], m);
                }
                if (m.find(cur) == m.end()) {
                    maxLen = max(maxLen, len);
                }
            }
        }
        if (exc) {
            maxLen = n;
            terminatedEarly = true;
        } else if (len > 1 && m.find(cur) == m.end()) {
            maxLen = max(maxLen, len);
        }
    }

    return maxLen;
}

void solve() {
    ll n;
    cin >> n;
    vector<ll> a;
    forn(i,n){
        ll x;
        cin >> x;
        a.push_back(x);
    }
    sort(a.begin(), a.end());
    map<ll, ll> m;
    for (const auto &x : a)
    {
        m[x]++;
    }
    vector<ll> u;
    for (const auto &p : m)
    {
        u.push_back(p.first);
    }
    cout << solver(u, m, n)<< "\n";
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

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (ll i = 0; i < n; i++)
ll gcdExtended(ll a, ll b, ll *x, ll *y)
{
    if (a == 0)
    {
        *x = 0, *y = 1;
        return b;
    }
    ll x1, y1;
    ll gcd = gcdExtended(b % a, a, &x1, &y1);
    *x = y1 - (b / a) * x1;
    *y = x1;
    return gcd;
}
ll modInverse(int b, int m)
{
    ll x, y;
    ll g = gcdExtended(b, m, &x, &y);
    if (g != 1)
    {
        return -1;
    }
    return (x % m + m) % m;
}
ll modDivide(ll a, ll b, ll m)
{
    a = a % m;
    ll inv = modInverse(b, m);
    if (inv == -1)
    {
        return -1;
    }
    else
    {
        return (inv * a) % m;
    }
}
void solve()
{
    ll n;
    cin >> n;
    ll a[n];
    forn(i, n) cin >> a[i];
    vector<ll> pref(n, 0);
    ll mod = 1e9 + 7;
    pref[0] = a[0] % mod;
    for (ll i = 1; i < n; i++)
    {
        pref[i] = (pref[i - 1] + a[i]) % mod;
    }
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        ll cur = (i ? pref[i - 1] : 0);
        cur = (cur * a[i]) % mod;
        ans = (ans + cur) % mod;
    }
    ans = ans % mod;
    ll num = n * (n - 1) % mod;
    num = modDivide(num, 2, mod);
    cout << modDivide(ans, num, mod) << "\n";
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
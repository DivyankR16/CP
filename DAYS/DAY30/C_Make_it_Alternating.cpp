#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (ll i = 0; i < n; i++)
const ll mod = 998244353;
ll mul(ll a, ll b, ll mod)
{
    return (a * b) % mod;
}
void solve()
{
    string s;
    cin >> s;
    ll n = s.size();
    ll ans = 1;
    ll need = 0;
    ll ways = 0;
    ll N = 0;
    ll i = 0;
    while (i < n)
    {
        ll cnt = 0;
        while (i < n - 1 && s[i] == s[i + 1])
        {
            i++;
            cnt++;
        }
        if (cnt > 0)
        {
            N += (cnt + 1);
        }
        ans = mul(cnt + 1, ans, mod);
        need += cnt;
        i++;
    }
    for (ll i = 1; i <= need; i++)
    {
        ans = mul(ans, i, mod);
    }
    cout << need << " " << ans << "\n";
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
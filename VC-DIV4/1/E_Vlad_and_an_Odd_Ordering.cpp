#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (ll i = 0; i < n; i++)
vector<ll> func(ll fst, ll cd, ll k, ll n)
{
    ll cnt = (n - fst) / cd + 1;
    if (k <= cnt)
    {
        return {fst + (k - 1) * cd, cnt};
    }
    else
    {
        return {-1, cnt};
    }
}
void solve()
{
    ll n, k;
    cin >> n >> k;
    if ((n + 1) / 2 >= k)
    {
        cout << 2 * k - 1 << "\n";
        return;
    }
    k -= (n + 1) / 2;
    ll i = 2;
    while(i<=n){
    if (func(i, i*2, k, n)[0] != -1)
    {
        cout << func(i, i*2, k, n)[0] << "\n";
        return;
    }
    k -= func(i, i*2, k, n)[1];
    i *= 2;
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
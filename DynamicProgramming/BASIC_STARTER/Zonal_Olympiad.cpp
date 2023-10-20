#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (ll i = 0; i < n; i++)
vector<ll> memo;
ll ansRecur(ll a[], ll n, bool flag)
{
    if (n <= 2)
    {
        if (n == 0)
        {
            return a[0];
        }
        else if (n == 1)
        {
            if (flag)
            {
                return a[1];
            }
            else
            {
                return min(a[0], a[1]);
            }
        }
        else
        {
            if (flag)
            {
                return a[2];
            }
            else
            {
                return min(min(a[0], a[1]), a[2]);
            }
        }
    }
    if (memo[n] != -1)
    {
        return memo[n];
    }
    return memo[n] = a[n] + min({ansRecur(a, n - 1, true), ansRecur(a, n - 2, true), ansRecur(a, n - 3, true)});
}
void solve()
{
    ll n;
    cin >> n;
    ll a[n];
    forn(i, n) cin >> a[i];
    forn(i, n)
    {
        memo.push_back(-1);
    }
    cout << min({ansRecur(a, n - 1, false), ansRecur(a, n - 2, false), ansRecur(a, n - 3, false)}) << "\n";
}
int main()
{
    solve();
    return 0;
}
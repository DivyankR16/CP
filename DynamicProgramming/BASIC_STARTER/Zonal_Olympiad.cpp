#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (ll i = 0; i < n; i++)
void solve()
{
    ll n;
    cin >> n;
    ll a[n];
    forn(i, n) cin >> a[i];
    if (n <= 3)
    {
        if (n == 1)
        {
            cout << a[0] << "\n";
        }
        else if (n == 2)
        {
            cout << min(a[0], a[1]) << "\n";
        }
        else
        {
            cout << min(min(a[0], a[1]), a[2]) << "\n";
        }
    }
    ll dp[n];
    memset(dp, 0, sizeof(dp));
    dp[0] = a[0];
    dp[1] = a[1];
    dp[2] = a[2];
    for (int i = 3; i < n; i++)
    {
        dp[i] += a[i] + min(min(dp[i - 1], dp[i - 2]), dp[i - 3]);
    }
    cout << min(min(dp[n - 1], dp[n - 2]), dp[n - 3]) << "\n";
}
int main()
{
    solve();
    return 0;
}
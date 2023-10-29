#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (ll i = 0; i < n; i++)
ll por(ll n, ll a)
{
    if (a == 0)
    {
        return 1;
    }
    return n * por(n, a - 1);
}
void solve()
{
    ll A, B, C, k;
    cin >> A >> B >> C >> k;
    if (max(A, B) > C)
    {
        cout << -1 << "\n";
        return;
    }
    ll minA = por(10, A - 1);
    ll maxA = por(10, A) - 1;
    ll minC = por(10, C - 1);
    ll maxC = por(10, C) - 1;
    for (ll i = minA; i <= maxA; i++)
    {
        ll minB = max(por(10, B - 1), minC - i);
        ll maxB = min(por(10, B) - 1, maxC - i);
        if (minB <= maxB)
        {
            ll num = maxB - minB + 1;
            if (k <= num)
            {
                cout << i << " "
                     << "+"
                     << " " << minB + k - 1 << " "
                     << "="
                     << " " << i + minB + k - 1 << "\n";
                return;
            }
            k -= num;
        }
    }
    cout << -1 << "\n";
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
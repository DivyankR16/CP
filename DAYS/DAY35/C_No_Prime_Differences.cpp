#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (ll i = 0; i < n; i++)
bool isPrime(ll n)
{
    if (n <= 1)
        return false;
    for (ll i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
void solve()
{
    ll n, m;
    cin >> n >> m;
    ll ans[n][m];
    if (!isPrime(n))
    {
        ll cnt = 1;
        forn(i, n)
        {
            forn(j, m)
            {
                cout << (i + 1) + j * n << " ";
            }
            cout << "\n";
        }
        cout << "\n";
    }
    else if (!isPrime(m))
    {
        ll cnt = 1;
        forn(i, n)
        {
            forn(j, m)
            {
                cout << cnt++ << " ";
            }
            cout << "\n";
        }
        cout << "\n";
    }
    else
    {
        ll need[n][m];
        ll cnt = 1;
        forn(i, n)
        {
            forn(j, m)
            {
                need[i][j] = cnt++;
            }
        }
        forn(i, n)
        {
            if (i % 2 == 1)
            {
                forn(j, m)
                {
                    cout << need[i][j] << " ";
                }
                cout << "\n";
            }
        }
        forn(i, n)
        {
            if (i % 2 == 0)
            {
                forn(j, m)
                {
                    cout << need[i][j] << " ";
                }
                cout << "\n";
            }
        }
        cout << "\n";
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
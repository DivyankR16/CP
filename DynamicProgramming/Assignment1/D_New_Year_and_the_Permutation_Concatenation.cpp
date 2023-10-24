#include <bits/stdc++.h>
using namespace std;
#define ll int64_t
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
const ll mod = 998244353;
const ll maxx = 2e6;
ll factarr[maxx];
void fact(ll n)
{
    factarr[1] = 1;
    for (ll i = 2; i <= n;i++){
        factarr[i]=(factarr[i-1]*i)%mod;
    }
}
void solve()
{
    ll n;
    cin >> n;
    fact(n);
    ll sum = 0;
    for (ll k = 1; k <= n - 1; k++)
    {
        sum =(sum+ modDivide(factarr[n],factarr[k],mod))%mod;
    }
    cout << (n * factarr[n]) % mod - sum << "\n";
}
int main()
{
    solve();
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (ll i = 0; i < n; i++)
void solve()
{
    ll n, m;
    cin >> n >> m;
    ll a[m];
    memset(a, 0, sizeof(a));
    ll minusonewale = 0;
    ll minustwowale = 0;
    ll ans = 0;
    ll done = 0;
    ll ckl = 0;
    ll ckr = 0;
    forn(i, n)
    {
        ll x;
        cin >> x;
        if (x == -1)
        {
            minusonewale++;
        }
        else if (x == -2)
        {
            minustwowale++;
        }
        else
        {
            x--;
            a[x] = 1;
        }
    }
    forn(i,m){
        if(a[i])done++;
        else ckr++;
    }
    ans = max(minusonewale, minustwowale) + done;
    forn(i, m)
    {
        if (a[i])
        {
            ans = max(ans, min(ckl, minusonewale) + min(ckr, minustwowale) + done);
        }
        else
        {
            ckl++;
            ckr--;
        }
    }
    ans=min(ans,m);
    cout << ans << "\n";
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
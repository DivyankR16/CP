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
    vector<ll> ans(n, -1);
    ll cnt[101];
    forn(i, 101)
    {
        cnt[i] = 0;
    }
    forn(i, n)
    {
        cnt[a[i]]++;
    }
    map<ll, ll> replace;
    ll possible = 0;
    forn(i, 101)
    {
        if (cnt[i] > 1 && possible == 0)
        {
            possible++;
            replace[i] = 2;
        }
        else if (cnt[i] > 1 && possible == 1)
        {
            possible++;
            replace[i] = 3;
            break;
        }
    }
    // for(auto i:replace){
    //     cout << i.first << " " << i.second << "\n";
    // }
    if (possible <= 1)
    {
        cout << -1 << "\n";
        return;
    }
    else
    {
        ll twocnt = 0;
        ll threecnt = 0;
        forn(i, n)
        {
            if (replace[a[i]] == 2)
            {
                if (!twocnt)
                {
                    ans[i] = 1;
                    twocnt++;
                }
                else
                {
                    ans[i] = replace[a[i]];
                    twocnt++;
                }
            }
            if (replace[a[i]] == 3)
            {
                if (!threecnt)
                {
                    ans[i] = 1;
                    threecnt++;
                }
                else
                {
                    ans[i] = replace[a[i]];
                    threecnt++;
                }
            }
        }
        forn(i, n)
        {
            if (ans[i] == -1)
            {
                ans[i] = 2;
            }
        }
        for (auto i : ans)
        {
            cout << i << " ";
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
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (ll i = 0; i < n; i++)
const int N = 1e6+9;
int n, a[N], d[N];
void make(int lx, int rx, int v, int l, int r)
{
    if (l >= rx || lx >= r) return;
    if (l <= lx && rx <= r)
    {
        d[v]++;
        return;
    }
    int m = (lx + rx) / 2;
    make(lx,m,2*v+1,l,r);
    make(m,rx,2*v+2,l,r);
}
int get(int lx, int rx, int v, int x)
{
    if (rx - lx == 1) return d[v];
    int m = (lx + rx) / 2;
    return d[v] + (x < m ? get(lx,m,2*v+1,x) : get(m,rx,2*v+2,x));
}
int sum(int x)
{
    int res = 0;
    while (x)
    {
        res += x % 10;
        x /= 10;
    }
    return res;
}
void solve()
{
    int q;
    cin >> n >> q;
    for (int i=0;i<n;i++) cin >> a[i];
    int kol = 1;
    while (kol < n) kol *= 2;
    fill(d, d + 2 * kol - 1, 0);
    for (int o=0;o<q;o++)
    {
        int t;
        cin >> t;
        if (t == 1)
        {
            int l, r;
            cin >> l >> r;
            l--;
            make(0, kol, 0, l, r);
        }
        else
        {
            int x;
            cin >> x;
            x--;
            int cnt = get(0, kol, 0, x);
            int tek = a[x];
            while (tek > 9 && cnt--)
            {
                tek = sum(tek);
            }
            cout << tek << "\n";
        }
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
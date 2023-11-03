#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (ll i = 0; i < n; i++)
const ll mod = 998244353;
vector<ll> tree;
vector<ll> lazy;
ll build(vector<ll> &a)
{
    ll n = a.size();
    while (__builtin_popcountll(n) != 1)
    {
        a.push_back(0);
        n++;
    }
    tree.resize(2 * n);
    lazy.resize(2 * n);
    forn(i, n)
    {
        tree[n + i] = a[i];
    }
    for (ll i = n - 1; i >= 1; i--)
    {
        tree[i] = tree[2 * i] + tree[2 * i + 1];
    }
    return n;
}
void update(ll node, ll segleft, ll segright, ll qleft, ll qright, ll value)
{
    if (lazy[node])
    {
        tree[node] += lazy[node] * (segright - segleft + 1);
        if (segleft != segright)
        {
            lazy[2 * node] += lazy[node];
            lazy[2 * node + 1] += lazy[node];
        }
        lazy[node] = 0;
    }
    if (segleft > qright || segright < qleft)
    {
        return;
    }
    if (segleft >= qleft && segright <= qright)
    {
        tree[node] += (segright - segleft + 1) * value;
        if (segleft != segright)
        {
            lazy[2 * node] += value;
            lazy[2 * node + 1] += value;
        }
        return;
    }
    ll lastidx = segleft + (segright - segleft) / 2;
    update(2 * node, segleft, lastidx, qleft, qright, value);
    update(2 * node + 1, lastidx + 1, segright, qleft, qright, value);
    tree[node] = tree[2 * node] + tree[2 * node + 1];
}
ll query(ll node, ll segleft, ll segright, ll qleft, ll qright)
{
    if (lazy[node])
    {
        tree[node] += lazy[node] * (segright - segleft + 1);
        if (segleft != segright)
        {
            lazy[2 * node] += lazy[node];
            lazy[2 * node + 1] += lazy[node];
        }
        lazy[node] = 0;
    }
    if (segleft > qright || segright < qleft)
    {
        return 0;
    }
    if (segleft >= qleft && segright <= qright)
    {
        return tree[node];
    }
    ll lastidx = segleft + (segright - segleft) / 2;
    return query(2 * node, segleft, lastidx, qleft, qright) + query(2 * node + 1, lastidx + 1, segright, qleft, qright);
}
void solve()
{
    ll l, r;
    cin >> l >> r;
    ll ans = 1;
    ll val = l;
    while(val*2<=r){
        val *= 2;
        ans++;
    }
    cout << ans<< " ";
    ans--;
    ll number = 0;
    ll left = l;
    ll right = r;
    ll ans1 = 0;
    while(left<=right){
        ll mid = left + (right - left) / 2;
        if((mid)*(1<<ans)<=r){
            ans1 = mid - l + 1;
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }
    number += ans1;
    left = l;
    right = r;
    ll ans2 = 0;
    if(ans>=1){
    while (left <= right)
    {
        ll mid = left + (right - left) / 2;
        if (((mid) * 3*(1<<(ans-1))) <= r)
        {
            ans2 = mid-l+1;
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    }
    number += ans2*(ans);
    // cout << "\n"<<"ans1 " << ans1 << " "
    //      << "ans2 " << ans2 << "\n";
    cout << number << "\n";
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
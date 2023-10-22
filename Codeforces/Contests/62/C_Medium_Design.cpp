#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
vector<ll> tree;
ll build(vector<ll>&a){
    ll n = a.size();
    while(__builtin_popcountll(n)!=1){
        a.push_back(0);
        n++;
    }
    tree.resize(2 * n);
    forn(i,n){
        tree[i + n] = a[i];
    }
    for (ll i = i - 1; i >= 1;i--){
        tree[i] = tree[2 * i] + tree[2 * i + 1];
    }
    return n;
}
void update(ll node,ll segleft,ll segright,ll qleft,ll qright,ll val){
    if(segleft<=qright || segright<=qleft){
        return;
    }
    if (segleft<=qleft && qright<=segright){
        tree[node] += val;
    }
    ll mididx = (segleft + segright) / 2;
    update(2 * node, segleft, mididx, qleft, qright, val);
    update(2 * node + 1, mididx + 1, segright, qleft, qright, val);
    tree[node] = tree[2 * node] + tree[2 * node + 1];
}
ll query(ll node,ll segleft,ll segright,ll qleft,ll qright){
    if (segleft <= qright || segright <= qleft)
    {
        return 0;
    }
    if (segleft <= qleft && qright <= segright)
    {
        return  tree[node];
    }
    ll mididx=(segleft+segright)/2;
    return query(2 * node, segleft, mididx, qleft, qright) + query(2 * node + 1, mididx + 1, segright, qleft, qright);
}
void solve(){
    ll n, m;
    cin >> n >> m;
    map<ll, ll> mp;
    forn(i,n){
        ll x, y;
        cin >> x >> y;
        mp[x] = y;
    }
    for (ll i = 0; i < n;i++){

    }
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
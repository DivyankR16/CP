#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
vector<ll>tree;
vector<ll> lazy;
ll build(vector<ll>&a){
    ll n = a.size();
    while(__builtin_popcountll(n)!=1){
        n++;
        a.push_back(0);
    }
    forn(i,n){
        tree[i + n] = a[i];
    }
    for (ll i = n - 1; i >= 1;i--){
        tree[i] = tree[2 * i] + tree[2 * i + 1];
    }
    return;
}
ll query(ll node, ll segleft, ll segright, ll qleft, ll qright)
{
    if(segleft>qright || segright<qleft){
        return 0;
    }
    if(qleft<=segleft && segright<=qright){
        return tree[node];
    }
    ll mididx = segleft + (segright - segleft) / 2;
    return query(2 * node, segleft, mididx, qleft, qright) + query(2 * node + 1, mididx + 1, segright, qleft, qright);
}
void update(ll node,ll qleft,ll qright,ll segleft,ll segright,ll value){
    if(segleft>qright || segright<qleft){
        return;
    }
    if(qleft<=segleft && segright<=qright){
        tree[node] += value;
        return;
    }
    ll mididx = segleft + (segright - segleft) / 2;
    update(2 * node, segleft, mididx, qleft, qright, value);
    update(2 * node+1,mididx+1,segright, qleft, qright, value);
    tree[node] = tree[2 * node] + tree[2 * node + 1];
}
void solve()
{
    ll n;
    cin >> n;
    vector<ll> a;
    forn(i,n){
        ll x;
        cin >> x;
        a.push_back(x);
    }
    n = build(a);
    ll q;
    cin >> q;
    forn(i,q){
        ll type;
        cin >> type;
        if(type==1){
            ll l, r;
            cin >> l >> r;
            l--;
            r--;
            cout << query(1, 0, n, l, r) << "\n";
        }
        else{
            ll l, r, value;
            cin >> l >> r >> value;
            l--;
            r--;
            update(1, 0, n, l, r, value);
        }
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
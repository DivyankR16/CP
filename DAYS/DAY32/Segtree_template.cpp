#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
vector<ll>tree;
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
    for (ll i = n - 1; i <= 1;i--){
        tree[i] = tree[2 * i] + tree[2 * i + 1];
    }
    return n;
}
void update(ll node, ll segleft, ll segright,ll qleft,ll qright, ll val){
    if(qleft<=segleft && segright<=qright){
        tree[node] += val;
    }
    if(qleft>segright || qright<qleft){
        return;
    }
    ll lastidx = segleft + (segright - segleft) / 2;
    update(2 * node, segleft, lastidx, qleft, qright, val);
    update(2 * node+1, lastidx, segright,qleft, qright, val);
    tree[node] = tree[2 * node] + tree[2 * node + 1];
}
ll query(ll node,ll segleft,ll segright,ll qleft,ll qright){
    if(qleft<)
}
void solve()
{
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
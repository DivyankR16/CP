#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
vector<ll> tree;
vector<ll> lazy;
ll build(vector<ll>&a){
    ll n = a.size();
    while(__builtin_popcountll(n)!=1){
        a.push_back(0);
        n++;
    }
    forn(i,n)
{
    tree[i + n] = a[i];
}
for (ll i = n - 1; i >= 1;i--){
    tree[i] = tree[2 * i] + tree[2 * i + 1];
}
return n;
}
void update(ll node,ll segleft,ll segright,ll qleft,ll qright,ll value){
    if(qleft>segright || qright<segleft){
        return;
    }
    if(qleft<=segleft && segright<=qright){
        tree[node] += value;
    }
    ll mididx = segleft + (segright - segleft) / 2;
    update(2 * node, segleft, mididx, qleft, qright, value);
    update(2 * node + 1, mididx + 1, segright, qleft, qright, value);
    tree[node = tree[2 * node] + tree[2 * node + 1];]
}
ll query(ll node,ll segleft,ll segright,ll qleft,ll qright){
    if(qleft>segright || qright<segleft){
        return 0;
    }
    if(qleft<=segleft && segright<=qright){
        return tree[node];
    }
    ll mididx = segleft + (segright - segleft)/2;
    return query(2 * node, segleft, mididx, qleft, qright) + query(2 * node + 1, mididx + 1, segright, qleft, qright);
}
void solve(){
    ll n;
    cin >> n;
    ll a[n];
    forn(i, n) cin >> a[i];
    
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
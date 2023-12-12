#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
vector<ll> tree;
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
    return n;
}
ll query(ll node,ll segleft,ll segright,ll qleft,ll qright){
    if(segleft>qright || segright<qleft){
        return 0;
    }
    if(qleft<=segleft && segright<=qright){
        return tree[node];
    }
    ll mididx = (segleft) + (segright - segleft) / 2;
    return query(2 * node, segleft, mididx, qleft, qright) + query(2 * node + 1, mididx + 1, segright, qleft, qright);
}
void update(ll node,ll segleft,ll segright,ll qleft,ll qright,ll value){
    if(segleft>qright || segright<qleft){
        return;
    }
    if(qleft<=segleft && qright<=segright){
        tree[node] += value;
    }
    ll mididx = segleft + (segright - segleft) / 2;
    update(2 * node, segleft, mididx, qleft, qright, value);
    update(2 * node + 1, mididx + 1, segright, qleft, qright, value);
    tree[node] = tree[2 * node] + tree[2 * node + 1];
}
void solve(){

}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
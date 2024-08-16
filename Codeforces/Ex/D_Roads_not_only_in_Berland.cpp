#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
vector<ll> parent;
vector<ll> sz;
void make(ll v){
    parent[v] = v;
    sz[v] = 1;
}
ll find(ll v){
    if(parent[v]==v){
        return v;
    }
    return parent[v] = find(parent[v]);
}
void uni(ll a,ll b){                    
    a = find(a);
    b = find(b);
    if(a!=b){
        if(sz[a]<sz[b]){
            swap(a, b);
        }
        parent[b] = a;
        sz[a] += sz[b];
    }
}
void solve(){
    ll n;
    cin>>n;
    parent.assign(n, 0);
    sz.assign(n, 0);
    forn(i,n){
        make(i);
    }
    vector<pair<ll, ll>> rm;
    vector<pair<ll, ll>> ad;
    forn(i,n-1){
        ll u, v;
        cin >> u >> v;
        u--;
        v--;
        if(find(u)==find(v)){
            rm.push_back({u, v});
        }
        else{
            uni(u, v);
        }
    }
    for (ll i = 1; i < n;i++){
        if(find(i)!=find(0)){
            uni(i, 0);
            ad.push_back({i, 0});
        }
    }
    cout << ad.size() << "\n";
    for (ll i = 0; i < ad.size();i++){
        cout << rm[i].first+1 << " " << rm[i].second+1 << " " << ad[i].first+1 << " " << ad[i].second+1 << "\n";
    }
}
int main(){
ios_base:: sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
solve();
return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
vector<vector<ll>> g;
vector<ll> parent;
ll ans;
void dfs(ll u,ll p){
    parent[u] = p;
    for(auto v:g[u]){
        if(v==p){
            continue;
        }
        dfs(v, u);
    }
}
void solve(){
    ll n, k;
    cin >> n >> k;
    g.assign(n,vector<ll>());
    parent.assign(n, -1);
    forn(i,n-1){
        ll x, y;
        cin >> x >> y;
        x--;
        y--;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    ll a[k];
    forn(i, k){
        cin >> a[i];
        a[i]--;
    }
    dfs(a[0],-1);
    set<ll> ans;
    for (ll i = 0; i < k;i++){
        ll p = a[i];
        while(p!=-1){
            if(ans.find(p)!=ans.end())break;
            ans.insert(p);
            p = parent[p];
        }
    }
        cout << ans.size() << "\n";
}
int main(){
ios_base:: sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
solve();
return 0;
}
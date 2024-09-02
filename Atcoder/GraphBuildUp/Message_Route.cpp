#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, m;
    cin >> n >> m;
    vector<vector<ll>> g(n);
    forn(i,m){
        ll x, y;
        cin >> x >> y;
        x--;
        y--;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    vector<ll> parent(n, -1);
    vector<bool> vis(n, 0);
    parent[0] = 0;
    queue<ll> q;
    q.push(0);
    vis[0] = 1;
    ll ans = 0;
    while(!q.empty()){
        bool f = false;
        ll sz = q.size();
        ans++;
        for (ll i = 0; i < sz;i++){
            ll cur = q.front();
            q.pop();
            if(cur==n-1){
                f = 1;
                break;
            }
            for(auto v:g[cur]){
                if(!vis[v]){
                    q.push(v);
                    parent[v] = cur;
                    vis[v] = 1;
                }
            }
        }
        if(f)
            break;
    }
    ll mv = n - 1;
    vector<ll> path;
    while(parent[mv]!=mv){
        path.push_back(mv);
        mv = parent[mv];
        if(mv==-1){
            cout << "IMPOSSIBLE" << "\n";
            return;
        }
    }
    path.push_back(mv);
    reverse(path.begin(), path.end());
    cout << ans << "\n";
    for(auto i:path){
        cout << i+1 << " ";
    }
    cout << "\n";
}
int main(){
ios_base:: sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
solve();
return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
vector<ll> adj[200010];
vector<bool> vis;
bool dfs(ll v, vector<ll> &path)
{
    bool ans = false;
    vis[v] = 1;
    path[v] = 1;
    for (ll i = 0; i < adj[v].size(); i++)
    {
        if (path[adj[v][i]])
        {
            return true;
        }
        else if (!vis[adj[v][i]])
        {
            ans |= dfs(adj[v][i], path);
        }
    }
    path[v] = 0;
    return ans;
}
void solve(){
    ll n, k;
    cin >> n >> k;
    vis.clear();
    vis.resize(n, 0);
    for (ll i = 0; i < n; i++)
    {
        adj[i].clear();
    }
    ll arr[k][n];
    for (ll i = 0; i < k; i++)
    {
        for (ll j = 0; j < n;j++){
            cin >> arr[i][j];
        }
    }
    forn(i,k){
        for (ll j = 1; j < n-1;j++){
            adj[arr[i][j] - 1].push_back(arr[i][j + 1] - 1);
        }
    }
        bool ans = false;
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            vector<ll> path(n, 0);
            ans |= dfs(i, path);
        }
    }
    if(ans){
        cout << "NO"
             << "\n";
    }
    else{
        cout << "YES"
             << "\n";
    }
}
int main(){
ios_base:: sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
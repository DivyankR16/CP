#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
vector<vector<char>>a;
vector<vector<bool>> vis;
vector<ll> Parent;
vector<ll> Size;
void make(ll v){
    Parent[v] = v;
    Size[v] = 1;
}
ll find(ll v){
    if(Parent[v]==v){
        return v;
    }
    return Parent[v] = find(Parent[v]);
}
void Union(ll u,ll v){
    u = find(u);
    v = find(v);
    if(u!=v){
        if(Size[u]<Size[v]){
            swap(u, v);
        }
        Parent[u] = v;
        Size[u] += Size[v];
    }
}
void dfs(ll i,ll j,ll pi,ll pj,ll n,ll m){
    if(i<0 || i>=n || j<0 || j>=m || vis[i][j] || a[i][j]=='.'){
        return;
    }
    vis[i][j] = 1;
    if(pi==-1 && pj==-1){
        make(i * m + j);
    }
    else{
        Union(i * m + j, pi * m + pj);
    }
    dfs(i - 1, j,i,j,n, m);
    dfs(i, j-1,i,j, n, m);
    dfs(i+1, j,i,j, n, m);
    dfs(i, j+1,i,j, n, m);
}
void solve(){
    ll n, m;
    cin >> n >> m;
    forn(i,n){
        vector<char> temp;
        forn(j,m){
            char c;
            cin >> c;
            temp.push_back(c);
        }
        a.push_back(temp);
    }
    vis.assign(n, vector<bool>(m, 0));
    Parent.assign(n * m, 0);
    Size.assign(n * m, 0);
    ll gans = 0;
    for (ll i = 0; i < n;i++){
        set<ll> s;
        ll cnt = 0;
        ll ans = 0;
        for (ll j = 0; j < m;j++){
            if(a[i][j]=='.'){
                cnt++;
            }
            else if(vis[i][j]){
                ll cmp = i * m + j;
                cmp = find(cmp);
                if(s.find(cmp)==s.end()){
                    s.insert(cmp);
                    ans += Size[cmp];
                }
            }
            else{
                dfs(i, j, -1, -1, n, m);
                // Union(i * m + j, i * m + j);
                ll cmp = i * m + j;
                s.insert(cmp);
                ans += Size[cmp];
            }
            if(i-1>=0){
                if (a[i-1][j] == '.')
                {
                }
                else if (vis[i-1][j])
                {
                    ll cmp = (i-1) * m + j;
                    cmp = find(cmp);
                    if (s.find(cmp) == s.end())
                    {
                        s.insert(cmp);
                        ans += Size[cmp];
                    }
                }
                else
                {
                    dfs(i-1, j, -1, -1, n, m);
                    ll cmp = (i-1) * m + j;
                    s.insert(cmp);
                    ans += Size[cmp];
                }
            }
            if (i + 1 <n)
            {
                if (a[i + 1][j] == '.')
                {
                }
                else if (vis[i + 1][j])
                {
                    ll cmp = (i + 1) * m + j;
                    cmp = find(cmp);
                    if (s.find(cmp) == s.end())
                    {
                        s.insert(cmp);
                        ans += Size[cmp];
                    }
                }
                else
                {
                    dfs(i + 1, j, -1, -1, n, m);
                    ll cmp = (i + 1) * m + j;
                    s.insert(cmp);
                    ans += Size[cmp];
                }
            }
            gans = max(gans, ans + cnt);
        }
    }
    cout << gans << "\n";
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
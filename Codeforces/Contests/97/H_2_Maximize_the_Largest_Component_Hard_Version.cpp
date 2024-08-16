#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
ll mnr;
ll mnc;
ll mxr;
ll mxc;
ll cnt;
vector<vector<char>> a;
vector<vector<bool>> vis;
vector<vector<ll>> rcI;
void dfs(ll i,ll j,ll n,ll m){
    if(i<0 || i>=n || j<0 || j>=m || vis[i][j] || a[i][j]=='.'){
        return;
    }
    cnt++;
    vis[i][j] = 1;
    mnr = min(i, mnr);
    mnc = min(j, mnc);
    mxr = max(i, mxr);
    mxc = max(j, mxc);
    dfs(i - 1, j, n, m);
    dfs(i, j-1, n, m);
    dfs(i+1, j, n, m);
    dfs(i, j+1, n, m);
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
    rcI.assign(n + 1, vector<ll>(m + 1, 0));
    vector<ll> rowI(n+1, 0);
    vector<ll> colI(m+1, 0);
    forn(i,n){
        forn(j,m){
            if(vis[i][j] || a[i][j]=='.'){
                continue;
            }
            mnr = LONG_MAX;
            mnc = LONG_MAX;
            mxr = LONG_MIN;
            mxc = LONG_MIN;
            cnt = 0;
            dfs(i, j, n, m);
            mnr = max(mnr - 1, 0ll);
            mnc = max(mnc - 1, 0ll);
            mxr = min(mxr + 1, n - 1);
            mxc = min(mxc + 1, m - 1);
            rowI[mnr] += cnt;
            rowI[mxr + 1] -= cnt;
            colI[mnc] += cnt;
            colI[mxc+1] -= cnt;
            rcI[mnr][mnc] += cnt;
            rcI[mxr + 1][mnc] -= cnt;
            rcI[mnr][mxc + 1] -= cnt;
            rcI[mxr + 1][mxc + 1] += cnt;
        }
    }
    for (ll i = 0; i < n;i++){
        for (ll j = 0; j < m;j++){
            if(i==0 && j==0){
                continue;
            }
            else if(i==0){
                rcI[i][j] += rcI[i][j - 1];
            }
            else if(j==0){
                rcI[i][j] += rcI[i - 1][j];
            }
            else{
                rcI[i][j] += rcI[i - 1][j] + rcI[i][j - 1] - rcI[i - 1][j - 1];
            }
        }
    }
    ll ans = 0;
    vector<ll> fr(n, 0);
    vector<ll> fc(m, 0);
    forn(i,n){
        rowI[i] += (i ? rowI[i - 1] : 0);
        forn(j,m){
            if(a[i][j]=='.'){
                fr[i]++;
            }
        }
    }
    forn(i,m){
        colI[i] += (i ? colI[i - 1] : 0);
        forn(j,n){
            if(a[j][i]=='.'){
                fc[i]++;
            }
        }
    }
    forn(i,n){
        forn(j,m){
            ans = max(ans, fr[i] + fc[j]-(a[i][j]=='.') + rowI[i] + colI[j] - rcI[i][j]);
        }

    }
    cout << ans << "\n";
    a.clear();
    vis.clear();
    rcI.clear();
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
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
const ll mx = 10;
vector<bool> vis(mx, 0);
vector<string> a(mx, "");
ll ans=mx+1;
void recur(ll i,ll m,ll n){
    if(i==n){
        string g = "";
        forn(i,m){
            g += 'x';
        }
        for (ll i = 0; i < n;i++){
            if(vis[i]){
                forn(j,a[i].size()){
                    if(a[i][j]=='o'){
                        g[j] = 'o';
                    }
                }
            }
        }
        bool t = 1;
        forn(i,m){
            t &= (g[i] == 'x' ? 0 : 1);
        }
        if(t){
            ll cnt = 0;
            forn(i,n){
                if(vis[i]){
                    cnt++;
                }
            }
            ans = min(ans, cnt);
        }
        return;
    }
    vis[i] = 1;
    recur(i + 1,m, n);
    vis[i] = 0;
    recur(i + 1,m, n);
}
void solve(){
    ll n, m;
    cin >> n >> m;
    forn(i,n){
        cin >> a[i];
    }
    recur(0,m,n);
    cout << ans << "\n";
    vis.clear();
    a.clear();
}
int main(){
ios_base:: sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
solve();
return 0;
}
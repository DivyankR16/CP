#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, q;
    cin >> n >> q;
    vector<string> a;
    forn(i,n){
        string s;
        cin >> s;
        a.push_back(s);
    }
    map<string, ll> mp;
    mp["BG"] = 0;
    mp["BR"] = 1;
    mp["BY"] = 2;
    mp["GR"] = 3;
    mp["GY"] = 4;
    mp["RY"] = 5;
    vector<vector<ll>> p(n, vector<ll>(6, -1));
    vector<vector<ll>> s(n, vector<ll>(6, n));
        for (ll i = 0; i < n; i++)
        {
            if (i == 0)
            {
                p[i][mp[a[i]]] = i;
            }
            else{
            p[i][mp[a[i]]] = i;
            for (ll j = 0; j < 6;j++){
                p[i][j] = max(p[i][j], p[i - 1][j]);
            }
        }
    }
    for (ll i = n - 1; i >= 0;i--){
        if(i==n-1){
            s[i][mp[a[i]]] = i;
        }
        else{
            s[i][mp[a[i]]] = i;
            for (ll j = 0; j < 6;j++){
                s[i][j] = min(s[i][j], s[i + 1][j]);
            }
        }
    }
        while (q--)
        {
            ll x, y;
            cin >> x >> y;
            x--;
            y--;
            ll tmp = min(x,y);
            y = max(x, y);
            x = tmp;
            if(a[x][0]==a[y][0] || a[x][0]==a[y][1] || a[x][1]==a[y][0] || a[x][1]==a[y][1]){
                cout << y - x << "\n";
                continue;
            }
            ll rm1 = mp[a[x]];
            ll rm2 = mp[a[y]];
            for (ll i = 0; i < 6;i++){
                if(i!=rm1 && i!=rm2){
                    if(s[x][i]<y){
                        cout << y - x << "\n";
                        continue;
                    }
                    if(p[y][i]>x){
                        cout << y - x << "\n";
                        continue;
                    }
                }
            }
            ll ans = INT_MAX;
            ll l1 = INT_MAX;
            for (ll i = 0; i < 6;i++){
                if(i!=rm1 && i!=rm2){
                    if(p[x][i]!=-1){
                    l1 = min(l1, p[x][i]);
                    }
                }
            }
            if(l1!=INT_MAX){
                ans = min(ans, 2 * (x - l1) + y - x);
            }
            ll l2 = INT_MAX;
            for (ll i = 0; i < 6;i++){
                if(i!=rm1 && i!=rm2){
                    l2 = min(l2, s[y][i]);
                }
            }
            if(l2!=n){
                ans = min(ans, 2 * (l2 - y) + y - x);
            }
            if(ans==INT_MAX){
                cout << -1 << "\n";
            }
            else{
                cout << ans << "\n";
            }
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
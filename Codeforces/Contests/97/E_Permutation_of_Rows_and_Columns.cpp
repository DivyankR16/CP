#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
        ll n, m;
        cin >> n >> m;
        vector<vector<ll>> a, b;
        forn(i,n){
            vector<ll> cur;
            forn(j,m){
                ll x;
                cin >> x;
                cur.push_back(x);
            }
            a.push_back(cur);
        }
        forn(i, n)
        {
            vector<ll> cur;
            forn(j, m)
            {
                ll x;
                cin >> x;
                cur.push_back(x);
            }
            b.push_back(cur);
        }
            map<vector<ll>, bool> f;
            for (auto v : a)
            {
                sort(v.begin(), v.end());
                f[v] = true;
            }
            for (auto v : b)
            {
                sort(v.begin(), v.end());
                if (f.find(v) == f.end())
                {
                    cout << "NO" << endl;
                    return;
                }
            }

            f.clear();

            for (ll j = 0; j < m; ++j)
            {
                vector<ll> c;
                for (ll i = 0; i < n; ++i)
                {
                    c.push_back(a[i][j]);
                }
                sort(c.begin(), c.end());
                f[c] = true;
            }
            for (ll j = 0; j < m; ++j)
            {
                vector<ll> c;
                for (ll i = 0; i < n; ++i)
                {
                    c.push_back(b[i][j]);
                }
                sort(c.begin(), c.end());
                if (f.find(c) == f.end())
                {
                    cout << "NO" << endl;
                    return;
                }
            }
            cout << "YES" << endl;
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
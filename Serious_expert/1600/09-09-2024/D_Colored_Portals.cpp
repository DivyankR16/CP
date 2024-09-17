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
    map<string, vector<ll>> mp;
    for (ll i = 0; i < n;i++){
        mp[a[i]].push_back(i);
    }
        auto f = [&](ll i, ll j) -> bool
        {
            if (a[i][0] == a[j][0] || a[i][0] == a[j][1] || a[i][1] == a[j][0] || a[i][1] == a[j][1])
            {
                return true;
            }
            return false;
        };
    while(q--){
        ll x, y;
        cin >> x >> y;
        x--;
        y--;
        if(x>y){
            swap(x, y);
        }
        if(f(x,y)){
            cout << y - x << "\n";
            continue;
        }
        vector<string> v;
        for (ll i = 0; i < 2;i++){
            for (ll j = 0; j < 2;j++){
                string need = "";
                need += a[x][i];
                need += a[y][j];
                sort(need.begin(), need.end());
                v.push_back(need);
            }
        }
        ll ans = INT_MAX;
        for(auto s:v){
            auto it = upper_bound(mp[s].begin(), mp[s].end(), x);
            if(it!=mp[s].end()){
                ans = min(ans, abs(*it - x) + abs(*it - y));
            }
            if(it!=mp[s].begin()){
                it--;
                ans = min(ans, abs(*it - x) + abs(*it - y));
            }
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
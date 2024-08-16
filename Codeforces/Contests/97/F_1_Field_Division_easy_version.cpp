#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, m,k;
    cin >> n >> m >> k;
    vector<pair<ll, ll>> v;
    map<pair<ll, ll>, ll> mp;
    forn(i,k){
        ll r, c;
        cin >> r >> c;
        v.push_back({r, c});
        mp[{r, c}] = i;
    }
    sort(v.begin(), v.end(),[](const pair<ll,ll>&p1,const pair<ll,ll>&p2){
        if(p1.first==p2.first){
            return p1.second > p2.second;
        }
        return p1.first < p2.first;
    });
    ll dp[k];
    memset(dp, 0, sizeof(dp));
    ll mn = INT_MAX;
    for (ll i = k - 1; i >= 0;i--){
        if(i==k-1){
            dp[i] = v[i].second;
            mn = v[i].second;
        }
        else{
            mn = min(mn, v[i].second);
            dp[i] = mn;
        }
    }
    ll ans = 0;
    ll prev = 0;
    forn(i,k){
        ans += (v[i].first - prev) * max(dp[i]-1,0ll);
        prev = v[i].first;
    }
    ans += (n - prev) * m;
    mn = m+1;
    vector<ll> need(k, 0);
    for (ll i = k - 1; i >= 0;i--){
        if(v[i].second<mn){
            need[mp[v[i]]] = 1;
            mn = v[i].second;
        }
    }
    cout << ans << "\n";
    for(auto i:need){
        cout << i << " ";
    }
    cout << "\n";
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
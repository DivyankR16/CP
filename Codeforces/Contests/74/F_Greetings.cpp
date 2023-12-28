#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    vector<pair<ll, ll>> segments;
    set<ll> s;
    forn(i, n)
    {
        ll l, r;
        cin >> l >> r;
        segments.push_back({l, r});
        s.insert(l);
        s.insert(r);
    }
    map<ll, ll> mp;
    ll pt = 1;
    for (auto i : s)
    {
        mp[i] = pt++;
    }
    vector<pair<ll, ll>> newsegments;
    for (ll i = 0; i < n; i++)
    {
        // newsegments[i].first = mp[segments[i].first];
        // newsegments[i].second = mp[segments[i].second];
        newsegments.push_back({mp[segments[i].first], mp[segments[i].second]});
    }
    vector<ll> presum(pt+1, 0);
    sort(newsegments.begin(),newsegments.end());
    for (auto i : newsegments)
    {
        presum[i.first]++;
        presum[i.second + 1]--;
    }
    // ll ans = 0;
    for (ll i = 1; i < pt+1; i++)
    {
        presum[i] += presum[i - 1];
        // ans = max(ans, presum[i]);
    }
    ll ans = 0;
    // for (ll i = 1; i <= pt;i++){
    //     cout << presum[i] << " ";
    // }
    // cout << "\n";
    // sort(segments.begin(), segments.end());
    for (auto i : segments)
    {
        ans += presum[mp[i.second]] - 1;
        }
    cout << ans << "\n";
    // for(auto i:newsegments){
    //     cout << i.first << " " << i.second << "\n";
    // }
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
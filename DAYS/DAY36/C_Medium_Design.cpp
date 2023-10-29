#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
ll costExculdingELE(vector<pair<ll,ll>>&segments,ll ele,ll n){
    vector<ll> presum(n + 1, 0);
    for(auto i:segments){
        if(ele>=i.first && ele<=i.second){
            continue;
        }
        presum[i.first]++;
        presum[i.second+1]--;
    }
    ll ans = presum[0];
    for (ll i = 1; i < n;i++){
        presum[i] += presum[i - 1];
        ans = max(ans, presum[i]);
    }
    return ans;
    //check
}
void solve(){
    ll n, m;
    cin >> n >> m;
    vector<pair<ll, ll>> segments;
    set<ll> s;
    s.insert(0);
    s.insert(m-1);
    forn(i,n){
        ll l, r;
        cin >> l >> r;
        l--;
        r--;
        segments.push_back({l, r});
        s.insert(l);
        s.insert(r);
    }
    map<ll, ll> mp;
    ll pt = 0;
    for(auto i:s){
        mp[i] = pt++;
    }
    for (ll i = 0; i < n;i++){
        segments[i].first = mp[segments[i].first];
        segments[i].second = mp[segments[i].second];
    }
    // ll cnt = 1;
    // for(auto i:segments){
    //     cout <<"Compressed Segment "<<cnt<<"-> "<< i.first << " " << i.second << "\n";
    //     cnt++;
    // }
    cout << max(costExculdingELE(segments, 0, pt), costExculdingELE(segments, pt - 1, pt)) << "\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
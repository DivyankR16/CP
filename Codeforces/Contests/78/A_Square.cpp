#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    vector<pair<ll,ll>>v;
    vector<pair<ll,ll>>k;
    forn(i,4){
        ll x, y;
        cin >> x >> y;
        v.push_back({x, y});
        k.push_back({y,x});
    }
    sort(v.begin(), v.end());
    ll ans = abs(v[0].second - v[1].second);
    sort(k.begin(), k.end());
    ans *= abs(k[0].second - k[1].second);
    cout << ans << "\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
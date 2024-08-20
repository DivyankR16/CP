#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, k;
    cin >> n >> k;
    ll a[n];
    ll b[n];
    vector<pair < ll, ll >> v;
    forn(i,n){
        cin >> a[i];
    }
    forn(i, n) cin >> b[i];
    forn(i,n){
        v.push_back({a[i], b[i]});
    }
    sort(v.begin(), v.end());
    ll ans = 0;
    forn(i,n){
        if(v[i].second){
            ll md = 0;
            if(i<n/2){
                md = v[n / 2].first;
            }
            else{
                md = v[(n - 2) / 2].first;
            }
            ans = max(ans, v[i].first + k + md);
        }
    }
    ll l = 0;
    ll r = 2e9 + 10;
    ll med=0;
    while(l<=r){
        ll md = l + (r - l) / 2;
        ll cnt = 0;
        vector<pair<ll, ll>> need;
        for (ll i = 0; i < n - 1;i++){
            if(v[i].first>=md){
                cnt++;
            }
            else{
                if(v[i].second){
                need.push_back(v[i]);
                }
            }
        }
        ll val = k;
        reverse(need.begin(), need.end());
        for (ll i = 0; i < need.size();i++){
            if(val>=md-need[i].first){
                val -= md - need[i].first;
                cnt++;
            }
        }
        if(cnt>=(n+1)/2){
            med = md;
            l = md + 1;
        }
        else{
            r = md - 1;
        }
    }
    ans = max(ans, v[n - 1].first + med);
    cout << ans << "\n";
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
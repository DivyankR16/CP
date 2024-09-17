#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, q;
    cin >> n >> q;
    vector<ll> a;
    forn(i,n){
        ll x;
        cin >> x;
        a.push_back(x);
    }
    sort(a.begin(), a.end());
    while(q--){
        ll b, k;
        cin >> b >> k;
        auto solver = [&](ll x) -> bool
        {
            auto llim = lower_bound(a.begin(), a.end(), b - x);
            auto ulim = upper_bound(a.begin(), a.end(), b + x);
            return ulim - llim >= k;
        };
        ll l = 0;
        ll r = 2e8;
        ll ans = -1;
        while(l<=r){
            ll x = l + (r - l) / 2;
            if(solver(x)){
                ans = x;
                r = x - 1;
            }
            else{
                l = x + 1;
            }
        }
        cout << ans << "\n";
    }
}
int main(){
ios_base:: sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
solve();
return 0;
}
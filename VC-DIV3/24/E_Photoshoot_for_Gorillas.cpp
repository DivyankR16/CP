#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, m, k;
    cin >> n >> m >> k;
    ll w;
    cin >> w;
    vector<ll> ans;
    ll h[w];
    forn(i,w){
        cin >> h[i];
    }
    for (ll i = 0; i < n;i++){
        for (ll j = 0; j < m;j++){
            ll lbx = max(0ll, i - k + 1);
            ll ubx = min(i, n - k);
            ll lby = max(0ll, j - k + 1);
            ll uby = min(j, m - k);
            ans.push_back((ubx - lbx + 1) * (uby - lby + 1));
        }
    }
    sort(ans.begin(), ans.end(), [](ll a, ll b)
         { return a > b; });
    sort(h, h + w, [](ll a, ll b)
         { return a > b; });
    ll j = 0;
    ll fans = 0;
    for (ll i = 0; i < w;i++){
        fans += ans[j++] * h[i];
    }
    cout << fans << "\n";
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
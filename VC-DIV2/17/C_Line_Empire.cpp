#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, a, b;
    cin >> n >> a >> b;
    ll pos[n+1];
    pos[0] = 0;
    for (ll i=1; i <= n;i++){
        cin >> pos[i];
    }
    vector<ll> presum(n + 1, 0);
    presum[0] = 0;
    for (ll i=1; i <= n;i++){
        presum[i] += presum[i - 1] + pos[i];
    }
    ll ans = LONG_LONG_MAX;
    for (ll i = 0; i <= n;i++){
        ans = min(ans, (a + b) * pos[i] + b * (presum[n] - presum[i] - (n - i) * pos[i]));
    }
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
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    ll a[n];
    forn(i, n) cin >> a[i];
    vector<ll>prefx(n+1,0);
    ll cur = 0;
    for (ll i = 0; i < n;i++){
        cur ^= a[i];
        prefx[i+1] = cur;
    }
    vector<ll> cnt0(30, 0);
    vector<ll> cnt1(30, 0);
    for (ll i = 0; i <=n;i++){
        for (ll j = 0; j < 30;j++){
            if(prefx[i] & (1ll<<j)){
                cnt1[j]++;
            }
            else{
                cnt0[j]++;
            }
        }
    }
    ll ans = 0;
    for (ll i = 0; i < 30;i++){
        ll zc = cnt0[i];
        ll oc = cnt1[i];
        ans += (1ll << i) * (zc * oc);
    }
    for (ll i = 0; i < n;i++){
        ans -= a[i];
    }
        cout << ans << "\n";
}
int main(){
ios_base:: sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
solve();
return 0;
}
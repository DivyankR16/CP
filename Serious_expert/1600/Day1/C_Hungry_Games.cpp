#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n,x;
    cin >> n >> x;
    ll a[n];
    forn(i, n) cin >> a[i];
    vector<ll> dp(n + 2, 0);
    vector<ll> suff(n + 1, 0);
    for (ll i = n - 1; i >= 0;i--){
        suff[i] += suff[i + 1] + a[i];
    }
    for (ll i = n - 1; i >= 0; i--)
    {
        ll l = i;
        ll r = n - 1;
        ll j = n;
        while(l<=r){
            ll m = l + (r - l) / 2;
            ll sum = suff[i] - suff[m + 1];
            if(sum<=x){
                l = m + 1;
            }
            else{
                r = m - 1;
                j = m;
            }
        }
        dp[i] = dp[j + 1] + j - i;
    }
    ll ans = 0;
    for (ll i = 0; i < n;i++){
        ans += dp[i];
    }
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
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin >> n;
ll a[n];
forn(i, n) cin >> a[i];
ll presum[n];
presum[0] = a[0];
for (ll i = 1; i < n;i++){
    presum[i] = presum[i - 1] + a[i];
}
vector<ll> fac;
for (ll i = 1; i * i <= n;i++){
    if(n%i==0){
        fac.push_back(i);
        if(i!=n/i){
            fac.push_back(n / i);
        }
    }
}
ll sz = fac.size();
ll ans = 0;
forn(i,sz){
    ll minval = LONG_LONG_MAX;
    ll maxval = 0;
    ll k = fac[i];
    ll fs = 0;
    while(fs<n){
        if(fs){
            minval = min(minval, presum[fs + k - 1] - presum[fs - 1]);
            maxval = max(maxval, presum[fs + k - 1] - presum[fs - 1]);
        }
        else{
            minval = min(minval, presum[fs + k - 1]);
            maxval = max(maxval, presum[fs + k - 1]);
        }
        fs += k;
    }
    ans = max(ans, maxval - minval);
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
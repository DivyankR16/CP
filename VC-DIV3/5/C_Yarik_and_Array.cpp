#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    ll a[n];
    forn(i, n) cin >> a[i];
    ll sum = 0;
    ll ans = LONG_LONG_MIN;
    auto solve = [&](ll idx1, ll idx2)
    {
        ll cur = 0;
        for (ll i = idx1; i < idx2;i++)
        {
            cur += a[i];
            ans = max(ans, cur);
            if(cur<0)
            {
                cur = 0;
            }
        }
    };
    for (ll i = 0; i < n;i++){
        ll j = i + 1;
        while(j<n && abs(a[j-1]+a[j])%2==1)j++;
        solve(i, j);
        i = j-1;
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
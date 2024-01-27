#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    ll a[n];
    forn(i, n) cin >> a[i];
    sort(a, a + n);
    map<ll, ll> mp;
    ll cnt = 0;
    ll ans = 0;
    for (ll i = 0; i < n-1;i++){
        mp[a[i]] += cnt++;
        if (a[i]==a[i+1]){
            ans += mp[a[i]];
        }
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
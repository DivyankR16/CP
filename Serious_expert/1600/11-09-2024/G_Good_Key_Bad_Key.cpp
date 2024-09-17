#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, k;
    cin >> n >> k;
    ll a[n];
    forn(i, n) cin >> a[i];
    ll ans = 0;
    ll sum = 0;
    for (ll i = 0; i < n;i++){
        ll cur = 0;
        ll dv = 2;
        for (ll j = i; j < min(n, i + 31);j++){
            cur += a[j] / dv;
            dv *= 2;
        }
        ans = max(ans, sum + cur);
        sum += a[i]-k;
    }
    ans = max(ans, sum);
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
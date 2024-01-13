#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, k, x;
    cin >> n >> k >> x;
    ll a[n];
    ll sum = 0;
    forn(i,n){
        cin >> a[i];
        sum += a[i];
    }
    sort(a, a + n);
    ll sl = 0;
    for (ll i = 0; i < x;i++){
        sl += a[n - i - 1];
    }
    ll idx = n - x;
    // cout << idx << "\n";
    ll ans = sum - 2 * sl;
    // cout << ans << "\n";
    for (ll i = 0; i < k;i++){
        sum -= a[n - i - 1];
        sl -= a[n - i - 1];
        if(idx-1>=0){
            sl += a[idx - 1];
        }
        idx--;
        ans = max(ans, sum - 2 * sl);
        // cout << ans << "\n";
    }
    cout << ans << "\n";
}
int main(){
ll t;
cin>>t;
while(t--){
    // cout << "nxt"
        //  << "\n";
    solve();
}
return 0;
}
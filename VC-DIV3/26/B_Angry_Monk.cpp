#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, k;
    cin >> n >> k;
    ll a[k];
    forn(i, k) cin >> a[i];
    ll ans = 0;
    sort(a, a + k);
    for (ll i = k - 2; i >= 0;i--){
        ans += max(0ll, a[i] - 1);
        ans += a[i];
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
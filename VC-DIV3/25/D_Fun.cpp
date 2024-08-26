#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, x;
    cin>>n>>x;
    ll ans = 0;
    for (ll a = 1; a <= x;a++){
        ll blim = n / a;
        for (ll b = 1; b <= blim;b++){
            ll val = min((n - a * b) / (a + b), x - a - b);
            ans += max(0ll, val);
        }
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
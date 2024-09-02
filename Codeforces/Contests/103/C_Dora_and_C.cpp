#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
vector<ll> tree;
void solve(){
    ll n, a, b;
    cin >> n >> a >> b;
    ll c[n];
    forn(i, n) cin >> c[i];
    ll g=__gcd(a,b);
    forn(i,n){
        c[i] =c[i]% g;
    }
    sort(c, c + n);
    ll ans = c[n - 1] - c[0];
    for (ll i = 1; i < n;i++){
        ans = min(ans, c[i - 1] + g - c[i]);
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
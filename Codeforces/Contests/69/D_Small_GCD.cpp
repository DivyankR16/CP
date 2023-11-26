#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    ll a[n];
    forn(i,n)cin>>a[i];
    sort(a, a + n);
    ll ans = 0;
    for (ll i = 1; i < n - 1;i++){
        ans += __gcd(a[i], a[i - 1]) * (n - i - 1);
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
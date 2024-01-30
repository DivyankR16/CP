#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    ll a[n + 1], dp[n + 1];
    for (ll i = 1; i <= n; i++)cin >> a[i];
    vector<ll> v;
    ll sum = 0;
    reverse(a + 1, a + n + 1);
    dp[0] = 0;
    for (ll i = 1; i <= n; i++)
        dp[i] = dp[i - 1] + max(0ll, sum) + a[i], sum += a[i];
    cout << dp[n] << endl;
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
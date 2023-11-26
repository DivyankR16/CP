#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,x;
cin >> n >> x;
ll a[n];
forn(i, n) cin >> a[i];
ll ans = 0;
ans = max(ans, a[0] - 0);
for (ll i = 1; i < n;i++){
    ans = max(ans, a[i] - a[i - 1]);
}
ans = max(ans, 2 * (x - a[n - 1]));
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

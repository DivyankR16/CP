#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,m,k;
cin>>n>>m>>k;
ll a[n], b[m];
forn(i, n) cin >> a[i];
forn(i, m) cin >> b[i];
sort(a, a + n);
sort(b, b + m);
ll ans = 0;
for (ll i = 0; i < n;i++){
    ans+=upper_bound(b, b + m, k - a[i])-b;
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
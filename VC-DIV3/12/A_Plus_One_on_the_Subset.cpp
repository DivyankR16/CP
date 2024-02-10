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
ll val;
ll ans = 0;
for (ll i = n - 1; i >= 0;i--){
    if(i==n-1){
        val = a[i];
    }
    else{
        ans = max(ans, val - a[i]);
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
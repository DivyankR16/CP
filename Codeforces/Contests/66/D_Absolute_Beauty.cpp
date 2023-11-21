#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    ll a[n];
    forn(i, n) cin >> a[i];
    ll b[n];
    forn(i, n) cin >> b[i];
    ll ans = 0;
    forn(i,n){
        ans += abs(a[i] - b[i]);
    }
    ll maxval = LONG_LONG_MIN;
    ll minval = LONG_LONG_MAX;
    forn(i,n){
        maxval = max(maxval,min(a[i], b[i]));
        minval = min(minval,max(a[i], b[i]));
    }
    ll val = ans + 2 * (maxval - minval);
    cout<<max(ans,val)<<"\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
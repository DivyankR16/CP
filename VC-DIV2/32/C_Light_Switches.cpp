#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, k;
    cin >> n >> k;
    ll a[n];
    forn(i, n) cin >> a[i];
    ll mx = 0;
    ll mn = INT_MAX;
    ll e = *max_element(a, a + n);
    for (ll i = 0; i < n;i++){
        ll cnt = (e - a[i]) / k;
        if(cnt&1)cnt++;
        a[i] += cnt * k;
        mx = max(mx, a[i]);
        mn = min(mn, a[i]);
    }
    if(mx<mn+k){
        cout << mx << "\n";
    }
    else{
        cout << -1 << "\n";
    }
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
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    ll a[n];
    forn(i, n) cin >> a[i];
    ll maxval = LONG_LONG_MIN;
    forn(i,n){
        maxval = max(maxval, a[i]);
    }
    if(n==1){
        cout << maxval - 1 << "\n";
        return;
    }
    ll ans = 0;
    // ll ans = max(0ll,maxval - 1);
    // for (ll i = 0; i < n-1;i++){
    //     if(a[i]<a[i+1]){
    //         ans++;
    //     }
    // }
    vector<ll> arr;
    arr.push_back(1);
    forn(i,n){
        if(a[i]!=arr.back()){
            arr.push_back(a[i]);
        }
    }
    ll sz = arr.size();
    forn(i,sz-1){
        if(arr[i]<arr[i+1]){
            ans += arr[i + 1] - arr[i];
        }
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
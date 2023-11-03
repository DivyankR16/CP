#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, k, x;
    cin >> n >> k >> x;
    ll a[n];
    forn(i, n) cin >> a[i];
    ll presum[n];
    forn(i,n){
        if(i){
            presum[i] = presum[i - 1] + a[i];
        }
        else{
            presum[i] = a[i];
        }
    }
    ll i = 0;
    ll j = k-1;
    ll ans = 0;
    while(j<n && j>=0){
        ll sum = presum[j] - (i ? presum[i - 1] : 0);
        ans = max(ans, sum);
        ans = max(ans, sum + k * x);
        i++;
        j++;
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
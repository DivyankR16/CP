#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    ll a[n];
    forn(i, n) cin >> a[i];
    ll ans = LONG_LONG_MAX;
    //n-j-1
    //j
    ll mfs = LONG_LONG_MIN;
    ll mfe[n];
    for (ll i = n - 1; i >= 0;i--){
        if(i==n-1){
            mfe[i] = i + a[i];
        }
        else{
            mfe[i] = max(mfe[i + 1], i + a[i]);
        }
    }
        forn(i, n)
        {
            ll cur = a[i];
            if(i==0)
                mfs = a[i];
            if(i==n-1){
                cur = a[i];
            }
            if(i>0)cur = max(cur, mfs);
            if(i<n-1)cur = max(cur, mfe[i + 1]);
            ans = min(ans, cur);
            mfs = max(mfs, (n - i - 1) + a[i]);
        }
        cout << ans << '\n';
}
int main(){
solve();
return 0;
}
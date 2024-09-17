#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, q;
    cin >> n >> q;
    ll a[n];
    forn(i, n) cin >> a[i];
    vector<ll> pref(n, 0);
    pref[0] = a[0];
    ll ts = a[0];
    for (ll i = 1; i < n;i++){
        pref[i] += pref[i - 1] + a[i];
    }
    // cout << pref[n - 1] << " ";
    while (q--)
    {
        ll l, r;
        cin >> l >> r;
        l--;
        r--;
        ll lrow = l / n;
        ll lpos = l % n;
        ll rrow = r / n;
        ll rpos = r % n;
        ll ans = pref[n - 1]*(rrow-lrow+1);
        ll brkpt = n - 1 - lrow;
        if(lpos<=brkpt+1){
            if(lpos){
                ll idx=lrow+lpos-1;
                ans-=pref[idx]-(lrow?pref[lrow-1]:0);
            }
        }
        else{
            ll idx = (lrow + lpos - 1) % n;
            ans -= pref[idx];
            ans -= pref[n - 1] - (lrow ? pref[lrow - 1] : 0);
        }
        brkpt = n - 1 - rrow;
        if(rpos<=brkpt){
            ans -= (rrow ? pref[rrow - 1] : 0);
            ans -= pref[n - 1] - pref[rpos + rrow];
        }
        else{
            ll idx = (rrow + rpos) % n;
            ans -= pref[rrow-1] - pref[idx];
        }
        cout << ans << "\n";
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
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, m;
    cin >> n >> m;
    ll a[n];
    forn(i, n) cin >> a[i];
    ll s = 0;
    forn(i,n){
        s += a[i];
    }
    if(s<=m){
        cout << "infinite" << '\n';
        return;
    }
    ll l = 0;
    ll r = m;
    ll ans = -1;
    while(l<=r){
        ll x = l + (r - l) / 2;
        ll cc = 0;
        forn(i,n){
            cc += min(a[i], x);
        }
        if(cc>m){
            r = x - 1;
        }
        else{
            ans = x;
            l = x + 1;
        }
    }
    cout << ans << "\n";
}
int main(){
ios_base:: sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
solve();
return 0;
}
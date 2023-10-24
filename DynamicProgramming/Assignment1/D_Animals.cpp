#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, x;
    cin >> n >> x;
    ll a[n];
    forn(i, n) cin >> a[i];
    ll sum = 0;
    ll ans = 0;
    for (ll i = n - 1; i >= 0;i--){
        sum += (ans + 1) * a[i];
        if(sum<=x){
            ans++;
        }
        else{
            break;
        }
    }
    cout << ans << "\n";
}
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    solve();
    return 0;
}
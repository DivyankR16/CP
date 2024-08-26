#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    ll a[n];
    forn(i, n) cin >> a[i];
    ll ans = 0;
    forn(i,n){
        if(!i){
        ll val = a[i] / 5;
        ans += val * 3;
        ans += min(a[i] % 5, 3ll);
        }
        else{
            if(ans%3){
                if(ans%3==1){
                    ans++;
                    a[i] -= min(1ll, a[i]);
                }
                if(a[i]){
                    a[i] -= min(3ll, a[i]);
                    ans++;
                }

            }
            ll val = a[i] / 5;
            ans += val * 3;
            ans += min(a[i] % 5, 3ll);
        }
    }
    cout << ans << '\n';
}
int main(){
ios_base:: sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
solve();
return 0;
}
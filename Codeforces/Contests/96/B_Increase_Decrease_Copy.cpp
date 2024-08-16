#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    ll a[n], b[n + 1];
    forn(i, n) cin >> a[i];
    forn(i, n + 1) cin >> b[i];
    ll mn = *min_element(b, b + n + 1);
    ll mx = *max_element(b, b + n + 1);
    ll e = b[n];
    ll ans = 0;
    bool f = false;
    for (ll i = 0; i < n;i++){
        ll res = b[i];
        if(a[i]>res){
            if(!f){
                if(e>=res && e<=a[i]){
                    f = true;
                }
            }
            ans += a[i] - res;
        }
        else{
            if(!f){
                if(e>=a[i] && e<=res){
                    f = true;
                }
            }
            ans += res - a[i];
        }
    }
    if(f){
        cout << ans + 1 << "\n";
    }
    else{
        sort(a, a + n);
        ll need = INT_MAX;
        forn(i,n){
            need = min(need, abs(e - a[i]));
        }
        sort(b, b + n);
        for (ll i = 0; i < n;i++){
            need = min(need, abs(e - b[i]));
        }
        cout << ans + need+1 << "\n";
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
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
    for (ll i = 0; i < n - 1;i++){
        ll x = max(a[i], a[i + 1]);
        ll y = min(a[i], a[i + 1]);
        if(x<=2*y)continue;
        for (ll i = 1; i <=30;i++){
            if((2*y*(1<<i))>=x && (2*y*(1<<(i+1)))>x){
                ans += i;
                break;
            }
        }
    }
    cout << ans << "\n";
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
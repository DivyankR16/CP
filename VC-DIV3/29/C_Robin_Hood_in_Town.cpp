#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    ll a[n];
    forn(i, n) cin >> a[i];
    if(n<=2){
        cout << -1 << "\n";
        return;
    }
    sort(a, a + n);
    ll mx = a[n - 1];
    ll tg = a[n / 2];
    ll s = 0;
    forn(i,n){
        s += a[i];
    }
    cout << max(0ll, 2*n * tg - s + 1) << "\n";
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
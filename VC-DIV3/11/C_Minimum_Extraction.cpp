#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    ll a[n];
    forn(i, n) cin >> a[i];
    if(n==1){
        cout << a[0] << "\n";
        return;
    }
    sort(a, a + n);
    ll i = 0;
    ll j = 1;
    ll buf = 0;
    ll ans = a[0];
    while(i<j && j<n){
        buf+=a[i];
        ans = max(ans, a[j]-buf);
        buf = a[j] - buf;
        a[j] = a[j] - buf;
        i++;
        j++;
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
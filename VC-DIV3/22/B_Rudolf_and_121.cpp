#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    ll a[n];
    forn(i, n) cin >> a[i];
    for (ll i = 1; i < n - 1;i++){
        ll f = a[i - 1];
        ll s = a[i];
        ll t = a[i + 1];
        if(s-2*f<0){
            cout << "NO"
                 << "\n";
            return;
        }
        if(t-f<0){
            cout << "NO"
                 << "\n";
            return;
        }
        a[i-1] -= f;
        a[i] -= 2 * f;
        a[i + 1] -= f;
    }
    cout << "YES"
         << "\n";
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
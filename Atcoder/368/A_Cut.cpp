#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, k;
    cin >> n >> k;
    ll a[n];
    forn(i, n) cin >> a[i];
    for (ll i = n - k; i < n;i++){
        cout << a[i] << " ";
    }
    for (ll i = 0; i < n - k;i++){
        cout << a[i] << " ";
    }
    cout << "\n";
}
int main(){
ios_base:: sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
solve();
return 0;
}
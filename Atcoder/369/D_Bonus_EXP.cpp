#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    ll a[n];
    forn(i, n) cin >> a[i];
    vector<ll> curo(n + 1, INT_MIN);
    vector<ll> cure(n + 1,INT_MIN);
    cure[0] = 0;
    for (ll i = 1; i <=n;i++){
        cure[i] = max(cure[i - 1], curo[i - 1] + 2*a[i-1]);
        curo[i] = max(curo[i - 1], cure[i - 1] + a[i-1]);
    }
    cout << max(cure[n], curo[n]) << "\n";
}
int main(){
ios_base:: sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
solve();
return 0;
}
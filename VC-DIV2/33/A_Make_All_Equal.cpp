#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin>>n;
    ll a[n];
    forn(i, n) cin >> a[i];
    vector<ll> f(n+1, 0);
    forn(i,n){
        f[a[i]]++;
    }
    ll mx = 0;
    forn(i,n+1){
        mx = max(mx, f[i]);
    }
    cout << n - mx << "\n";
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
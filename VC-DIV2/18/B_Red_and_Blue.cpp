#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    ll a[n];
    forn(i, n) cin >> a[i];
    ll m;
    cin >> m;
    ll b[m];
    forn(i, m) cin >> b[i];
    ll maxsum1 = 0;
    ll maxsum2 = 0;
    ll sum1 = 0;
    ll sum2 = 0;
    forn(i,n){
        sum1 += a[i];
        maxsum1 = max(maxsum1, sum1);
    }
    forn(i,m){
        sum2 += b[i];
        maxsum2 = max(maxsum2, sum2);
    }
    cout << maxsum1 + maxsum2 << "\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
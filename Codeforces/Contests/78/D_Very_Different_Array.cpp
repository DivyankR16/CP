#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, m;
    cin >> n >> m;
    ll a[n], b[m];
    forn(i, n) cin >> a[i];
    forn(i, m) cin >> b[i];
    priority_queue<ll> p;
    priority_queue<ll> p1;
    forn(i,m){
        p.push(b[i]);
        p1.push(-b[i]);
    }
    sort(a, a + n);
    ll pa[n];
    forn(i,n){
        pa[i] = 0;
    }
    forn(i,n){
        pa[i] += abs(a[i] - p.top());
        p.pop();
    }
    ll sa[n];
    forn(i,n){
        sa[i] = 0;
    }
    for (ll i = n - 1; i >= 0;i--){
        sa[i] += abs(a[i] - (-p1.top()));
        // cout << abs(a[i] - (-p1.top())) << "\n";
        p1.pop();
    }
    for (ll i = 1; i < n;i++){
        pa[i] += pa[i - 1];
    }
    for (ll i = n - 2; i >= 0;i--){
        sa[i] += sa[i + 1];
    }
        ll ans = 0;
    forn(i,n){
        if(i<n-1){
            ans = max(ans, pa[i] + sa[i + 1]);
        }
        if(i==n-1){
            ans = max(ans, pa[i]);
        }
    }
    // cout << sa[0] << "\n";
    ans = max(ans, sa[0]);
    cout << ans << "\n";
}
int main(){
ll t;
cin>>t;
while(t--){
    // cout << "nxt"
    //      << "\n";
    solve();
}
return 0;
}
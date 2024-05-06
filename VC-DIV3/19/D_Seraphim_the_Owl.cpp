#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n, 0);
    vector<ll> b(n, 0);
    forn(i,n){
        ll x;
        cin >> x;
        a[i] = x;
    }
    forn(i, n)
    {
        ll x;
        cin >> x;
        b[i] = x;
    }
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    ll sm[n];
    memset(sm, 0, sizeof(sm));
    for (ll i = 0; i <n;i++)
    {
        sm[i] += min(a[i], b[i])+(i?sm[i-1]:0);
    }
    ll cnt = 1;
    ll idx = n - 1;
    ll ans = LONG_LONG_MAX;
    while(cnt<=m){
        ans = min(ans, a[idx] + (idx ? sm[idx - 1] : 0));
        cnt++;
        idx--;
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
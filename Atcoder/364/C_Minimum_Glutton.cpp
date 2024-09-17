#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    ll x, y;
    cin >> x >> y;
    ll a[n], b[n];
    forn(i, n) cin >> a[i];
    forn(i, n) cin >> b[i];
    sort(a, a + n, [](ll a, ll b)
         { return a > b; });
    sort(b, b + n, [](ll a, ll b)
         { return a > b; });
    ll c1 = 0;
    ll l1 = 0;
    ll c2 = 0;
    ll l2 = 0;
    for (ll i = 0; i < n;i++){
        l1 += a[i];
        c1++;
        if(l1>x){
            break;
        }
    }
    for (ll i = 0; i < n; i++)
    {
        l2 += b[i];
        c2++;
        if (l2 > y)
        {
            break;
        }
    }
    cout << min(c1, c2) << "\n";
}
int main(){
ios_base:: sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
solve();
return 0;
}
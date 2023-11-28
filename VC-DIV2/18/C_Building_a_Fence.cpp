#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, k;
    cin >> n >> k;
    vector<ll> h(n);
    forn(i,n) cin >> h[i];
    vector<ll> low(n);
    vector<ll> high(n);
    low[0] = h[0];
    high[0] = h[0];
    bool fail = false;
    for (ll i = 1; i < n - 1;i++)
    {
        low[i] = h[i];
        high[i] = h[i] + k - 1;
        if (low[i] > high[i - 1] + k - 1)
        {
            fail = true;
            // break;
        }
        if (high[i] < low[i - 1] - k + 1)
        {
            fail = true;
            // break;
        }
        low[i] = max(low[i], low[i - 1] - k + 1);
        high[i] = min(high[i], high[i - 1] + k - 1);
    }
    low[n - 1] = h[n - 1];
    high[n - 1] = h[n - 1];
    ll i = n - 1;
    if (low[i] > high[i - 1] + k - 1)
    {
        fail = true;
    }
    if (high[i] < low[i - 1] - k + 1)
    {
        fail = true;
    }
    /* rep(i,0,n)
     {
         cout << low[i] << " ";
     }
     cout << endl;
     rep(i,0,n) cout << high[i] << " ";
     cout << endl;*/

    if (fail)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
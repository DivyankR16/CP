#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (ll i = 0; i < n; i++)
void solve()
{
    ll n, m;
    cin >> n >> m;
    ll a[n];
    forn(i, n) cin >> a[i];
    string s;
    cin >> s;
    ll l = 0;
    ll r = n - 1;
    for (ll i = 0; i < n;i++){
        if(l==r)
            break;
      if(s[i]=='L')l++;
      else if(s[i]=='R'){
          r--;
      }
    }
    ll idx = l;
    ll ans = a[idx]%m;
    l = idx;
    r = idx;
    vector<ll> need;
    need.push_back(ans);
    for (ll i = n - 2; i >= 0;i--){
       if(s[i]=='L'){
           l--;
           ans = (ans * a[l]) % m;
       }
       else{
           r++;
           ans = (ans * a[r] % m);
       }
       need.push_back(ans);
    }
    reverse(need.begin(), need.end());
    for(auto i:need){
        cout << i << " ";
    }
    cout << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
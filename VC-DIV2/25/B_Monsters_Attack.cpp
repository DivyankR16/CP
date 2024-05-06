#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, k;
    cin >> n >> k;
    ll a[n], x[n];
    forn(i, n) cin >> a[i];
    forn(i, n) cin >> x[i];
    vector<pair<ll, ll>> v;
    forn(i,n){
        v.push_back({abs(x[i]), a[i]});
    }
    sort(v.begin(), v.end());
    ll i = 0;
    ll tpass = 0;
    ll psuedok = k;
    while(i<n){
      if(v[i].first-tpass<=0){
          cout << "NO"
               << "\n";
          return;
      }
      while(i<n && v[i].second<=psuedok){
          psuedok -= v[i].second;
          i++;
      }
      if(psuedok){
          v[i].second -= psuedok;
      }
      psuedok = k;
      tpass++;
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
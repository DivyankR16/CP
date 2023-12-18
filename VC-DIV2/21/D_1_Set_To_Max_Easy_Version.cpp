#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    ll a[n], b[n];
    forn(i, n) cin >> a[i];
    forn(i, n) cin >> b[i];
    vector<pair<ll, ll>> v;
    forn(i,n){
        v.push_back({a[i], i});
    }
    n = v.size();
    sort(v.begin(), v.end());
    forn(i,n){
        ll index = v[i].second;
        ll val = v[i].first;
        for (ll j = index; j < n;j++){
            if(a[j]>val || b[j]<val)break;
            a[j] = val;
        }
        for (ll j = index; j >= 0;j--){
            if (a[j] > val || b[j] < val)break;
            a[j] = val;
        }
    }
    forn(i,n){
        if(a[i]!=b[i]){
            cout << "NO"
                 << "\n";
            return;
        }
    }
    cout << "YES"
         << "\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
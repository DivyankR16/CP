#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    ll a[n];
    forn(i, n) cin >> a[i];
    vector<pair<ll, ll>> v;
    forn(i,n){
        v.push_back({a[i], i});
    }
    sort(v.begin(), v.end());
    ll shift = 0;
    vector<vector<ll>> ans;
    forn(i,n){
        vector<ll> temp;
        ll pos = v[i].second;
        ll diff = pos - i;
        if(diff>0){
            temp.push_back(i + 1);
            temp.push_back(n);
            temp.push_back(diff);
            ans.push_back(temp);
            for (ll j = i; j < n;j++)
            {
                v[j].second = v[j].second - diff;
                if(v[j].second<i){
                    v[j].second += n-i;
                }
            }
        }
    }
    cout << ans.size() << "\n";
    for(auto i:ans){
        for(auto j:i){
            cout << j << " ";
        }
        cout << "\n";
    }
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
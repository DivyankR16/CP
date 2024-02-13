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
    ll pref[n];
    pref[0] = v[0].first;
    for (ll i = 1; i<n;i++){
        pref[i] = pref[i - 1] + v[i].first;
    }
    set<ll> ans;
    for (ll i = n - 1; i >= 0;i--){
        if(i==n-1){
            ans.insert(v[i].second + 1);
        }
        else{
            if(pref[i]>=pref[i+1]-pref[i]){
                ans.insert(v[i].second + 1);
            }
            else{
                break;
            }
        }
    }
    cout << ans.size() << "\n";
    for(auto i:ans){
        cout << i << " ";
    }
    cout << "\n";
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
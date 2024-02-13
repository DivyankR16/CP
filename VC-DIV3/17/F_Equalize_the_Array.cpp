#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    ll a[n];
    forn(i, n) cin >> a[i];
    map<ll, ll> mp;
    forn(i,n){
        mp[a[i]]++;
    }
    vector<ll> v;
    for(auto i:mp){
        v.push_back(i.second);
    }
    sort(v.begin(), v.end());
    n = v.size();
    ll pref[n];
    pref[0] = v[0];
    for (ll i = 1; i < n;i++){
        pref[i] = pref[i - 1] + v[i];
    }
    ll ans = INT_MAX;
    for (ll i = 0; i< n;i++){
        if(i==0){
            ll curans = 0;
            curans += (pref[n - 1] - pref[i]) - (n -1- i) * v[i];
            ans = min(ans, curans);
        }
        else if(i==n-1){
            ll curans = 0;
            curans += pref[i - 1];
            ans = min(ans, curans);
        }
        else{
            ll curans = 0;
            curans += pref[i - 1];
            curans += (pref[n - 1] - pref[i])-(n-1-i)*v[i];
            ans = min(ans, curans);
        }
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
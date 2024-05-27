#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    ll a[n];
    forn(i, n) cin >> a[i];
    map<vector<ll>,ll> mp;
    map<vector<ll>,ll> mp1;
    map<vector<ll>,ll> mp2;
    map<vector<ll>,ll> mp3;
    ll ans = 0;
    for (ll i = 0; i < n - 2;i++){
        ll val = mp[{a[i], a[i + 1], a[i + 2]}];
        ans += mp1[{a[i], a[i + 1]}]-val;
        ans += mp2[{a[i+1], a[i + 2]}]-val;
        ans += mp3[{a[i], a[i + 2]}]-val;
        mp[{a[i], a[i + 1], a[i + 2]}]++;
        mp1[{a[i], a[i + 1]}]++;
        mp2[{a[i + 1], a[i + 2]}]++;
        mp3[{a[i], a[i + 2]}]++;
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
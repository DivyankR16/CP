#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    vector<string> v;
    forn(i,n){
        string s;
        cin >> s;
        v.push_back(s);
    }
    map<pair<ll,ll>,ll> mp;
    forn(i,n){
        ll len = 0;
        string x = v[i];
        ll sum = 0;
        for (ll j = 0; j< x.size();j++){
            sum += x[j] - '0';
        }
            mp[{sum, x.size()}]++;
    }
    vector<ll> num[n];
    forn(i,n){
        ll sum = 0;
        string x = v[i];
        for (ll j = 0; j < x.size();j++){
            sum += x[j]-'0';
            num[i].push_back(sum);
        }
    }
    // forn(i,n){
    //     ll sz = num[i].size();
    //     for (ll j = 0; j<sz;j++){
    //         cout << num[i][j] << " ";
    //     }
    //     cout << "\n";
    // }
    ll ans = 0;
    for (ll i = 0; i < n;i++){
        ll sz = num[i].size();
        for (ll j = 0; j<sz;j++){
            // cout << mp[{num[i][j] - (num[i][sz - 1] - num[i][j]), sz % 2}] << "\n";
            if (mp.find({num[i][j] - (num[i][sz - 1] - num[i][j]), sz % 2})!=mp.end()){
                ans += mp[{num[i][j] - (num[i][sz - 1] - num[i][j]), sz % 2}];
            }
        }
    }
    // ans += n;
    cout << ans << "\n";
}
int main(){
solve();
return 0;
}
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
            mp[{sum, x.size()%2}]++;
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
    //     cout << num[i][sz - 1] << " ";
    // }
    //     cout << "\n";
    ll ans = 0;
    for (ll i = 0; i < n;i++){
        ll sz = num[i].size();
        for (ll j = 0; j<sz-1;j++){
            // cout << mp[{num[i][j] - (num[i][sz - 1] - num[i][j]), sz % 2}] << "\n";
            if (mp.find({num[i][j] - (num[i][sz - 1] - num[i][j]), sz % 2})!=mp.end()){
                // cout <<"for i-> "<< i<<" -> "<<num[i][j] - (num[i][sz - 1] - num[i][j]) <<" sum wale-> "<< mp[{num[i][j] - (num[i][sz - 1] - num[i][j]), sz % 2}] <<" 2-wale "<< "\n";
                ans += 2*mp[{num[i][j] - (num[i][sz - 1] - num[i][j]), sz % 2}];
            }
        }
        if (mp.find({num[i][sz-1], sz % 2}) != mp.end())
        {
            ans += max(mp[{num[i][sz-1], sz % 2}]-1,0ll);
            // cout << "for i-> " << i << " -> " << num[i][sz-1] << " sum wale-> " << mp[{num[i][sz-1], sz % 2}] << "\n";
        }
    }
    ans += n;
    cout << ans << "\n";
}
int main(){
solve();
return 0;
}
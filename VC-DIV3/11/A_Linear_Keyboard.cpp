#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    string keys;
    cin >> keys;
    string s;
    cin >> s;
    map<char, ll> mp;
    ll cnt = 1;
    for(auto i:keys){
        mp[i] = cnt++;
    }
    ll ans = 0;
    for (ll i = 0; i < s.size() - 1;i++){
        ans += abs(mp[s[i + 1]] - mp[s[i]]);
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
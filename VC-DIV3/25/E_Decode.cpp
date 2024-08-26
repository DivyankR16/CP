#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    string s;
    cin>>s;
    ll n = s.size();
    vector<ll> pres(n + 1, 0);
    for (ll i = 1; i <= n;i++){
        pres[i] += pres[i - 1] + (s[i - 1] == '1' ? 1 : -1);
    }
    map<ll, ll> mp;
    ll mod = 1e9 + 7;
    ll ans = 0;
    for (ll i = 0; i <= n;i++){
        ll rc = n - i + 1;
        ans += (rc * (mp[pres[i]])%mod)%mod;
        mp[pres[i]] =(mp[pres[i]]+i+1)%mod;
    }
    ans %= mod;
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
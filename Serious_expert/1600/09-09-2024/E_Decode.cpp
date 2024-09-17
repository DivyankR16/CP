#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    string s;
    cin >> s;
    map<ll, ll>mp;
    ll mod = 1e9 + 7;
    ll n = s.size();
    vector<ll> a;
    forn(i,n){
        if(s[i]=='1'){
            a.push_back(1);
        }
        else{
            a.push_back(-1);
        }
    }
    mp[0] = 1;
    ll sum = 0;
    ll ans = 0;
    for (ll i=0; i < n;i++){
        sum += a[i];
        if(mp.find(sum)!=mp.end()){
            ll l = mp[sum];
            ll r = n - i;
            ans += (l * r) % mod;
            ans = ans % mod;
        }
        mp[sum] = (mp[sum] + i + 2) % mod;
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
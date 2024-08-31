#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    string s;
    cin>>s;
    vector<vector<ll>> dp(n, vector<ll>(3, 0));
    map<char, ll> mp;
    mp['R'] = 0;
    mp['P'] = 1;
    mp['S'] = 2;
    dp[0][(mp[s[0]] + 1) % 3] += 1;
    dp[0][(mp[s[0]] + 2) % 3] -= 1;
    for (ll i = 1; i < n;i++){
        dp[i][(mp[s[i]] + 1) % 3] = 1 + max(dp[i - 1][(mp[s[i]] + 2) % 3], dp[i - 1][(mp[s[i]] + 3) % 3]);
        dp[i][(mp[s[i]]) % 3] = max(dp[i - 1][(mp[s[i]] + 1) % 3], dp[i - 1][(mp[s[i]] + 2) % 3]);
        dp[i][(mp[s[i]]+2) % 3] = 0;
    }
    cout << max({dp[n - 1][0], dp[n - 1][1], dp[n - 1][2]}) << "\n";
}
int main(){
ios_base:: sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
solve();
return 0;
}
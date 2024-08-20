#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, k;
    cin >> n >> k;
    vector<ll> a;
    vector<ll> b;
    forn(i,n){
        ll x, y;
        cin >> x >> y;
        a.push_back(x);
        b.push_back(y);
    }
    vector < vector<ll>> dp(n + 1, vector<ll>(k + 1, INT_MAX));
    dp[0][0] = 0;
    vector<vector<ll>> cost;
    forn(i,n){
        ll l = a[i];
        ll w = b[i];
        vector<ll> tmp;
        tmp.push_back(0);
        while(l && w){
            if(l>=w){
                tmp.push_back(w);
                l--;
            }
            else{
                tmp.push_back(l);
                w--;
            }
        }
        for (ll j = 1; j < tmp.size();j++){
            tmp[j] += tmp[j - 1];
        }
        cost.push_back(tmp);
    }
    for(auto i:cost){
        for(auto j:i){
            cout << j << " ";
        }
        cout << "\n";
    }
    cout << "over" << "\n";
    // for (ll i = 0; i < n;i++){
    //     for (ll j = 0;j<)
    // }
    // for (ll i = 1; i <= n;i++){
    //     for (ll j = 0; j <= k;j++){
    //         for (ll z = 0; z + j <= k;z++){
    //             dp[i][j + z] = min(dp[i][j + z], dp[i - 1][j] + cost[i - 1][z]);
    //         }
    //     }
    // }
    // if(dp[n][k]!=INT_MAX){
    //     cout << dp[n][k] << "\n";
    // }
    // else{
    //     cout << -1 << "\n";
    // }
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
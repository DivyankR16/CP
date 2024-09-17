#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n,q;
    cin>>n>>q;
    ll H = 1000;
    ll W = 1000;
    vector<vector<ll>> dp(H+1, vector<ll>(W+1, 0));
    forn(i,n){
        ll h, w;
        cin >> h >> w;
        dp[h][w]++;
    }
    for (ll i = 1; i <= H;i++){
        for (ll j = 1; j <= W;j++){
            dp[i][j] *= i * j;
        }
    }
        for (ll i = 1; i <= H; i++)
        {
            for (ll j = 1; j <= W; j++)
            {
                dp[i][j] += dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1];
            }
        }
    while(q--){
        ll hl, wl, hh, wh;
        cin >> hl >> wl >> hh >> wh;
        hh--;
        wh--;
        wl++;
        hl++;
        cout << dp[hh][wh] - dp[hh][wl - 1] - dp[hl - 1][wh] + dp[hl - 1][wl - 1]<<"\n";
    }
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
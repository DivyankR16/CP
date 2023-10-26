#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, m;
    cin >> n >> m;
    ll a[n];
    forn(i, n) cin >> a[i];
    bool dp[n+1][m];
    for (ll i = 0; i <m;i++){
        dp[0][i] = 0;
    }
    for (ll i = 0; i <= n;i++){
        dp[i][0] = 0;
    }
        for (ll i = 1; i <= n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                dp[i][j] = dp[i - 1][j];
                if (j - (a[i - 1] % m) >= 0)
                {
                    dp[i][j] |= dp[i - 1][j - a[i - 1] % m];
                }
            }
        }
    if(dp[n][0]){
        cout << "YES"
             << "\n";
    }
    else{
        cout << "NO"
             << "\n";
    }
}
int main(){
solve();
return 0;
}
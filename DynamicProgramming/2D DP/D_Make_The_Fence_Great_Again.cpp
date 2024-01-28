#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    ll a[n], b[n];
    forn(i,n){
        cin >> a[i] >> b[i];
    }
    ll dp[n][3];
    dp[0][0] = 0;
    dp[0][1] = b[0];
    dp[0][2] = 2*b[0];
    for (ll i = 1; i<n;i++){
        dp[i][0] = 1e18+100;
        dp[i][1] = 1e18+100;
        dp[i][2] = 1e18+100;                                                                     
        for (ll j = 0; j < 3;j++){                                                
            for (ll k = 0; k < 3;k++){
                if(a[i-1]+j!=a[i]+k){                                                    
                    dp[i][k] = min(dp[i][k], dp[i - 1][j] + k * b[i]);
                }
            }
        }
    }
    cout << min({dp[n - 1][0], dp[n - 1][1], dp[n - 1][2]}) << "\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
}
return 0;
}
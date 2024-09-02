#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    ll a[n];
    forn(i, n) cin >> a[i];
    vector<pair<ll, ll>> dp(n+1);
    for (ll i = 0; i <= n;i++){
        dp[i].first = INT_MAX;
        dp[i].second = 0;
    }
    dp[0].first = 0;
    
    for (ll i = 1; i <= n; i++)
    {
        if (a[i - 1] == 0)
        {
            dp[i] = dp[i - 1];
            continue;
        }
        else
        {
            dp[i].first = dp[i - 1].first + 1;
            dp[i].second = dp[i - 1].second + a[i - 1];
            if(i>1 && a[i-2]!=0){
                if (dp[i].first > dp[i - 2].first + 1){
                    dp[i].first = dp[i - 2].first + 1;
                    dp[i].second = dp[i - 2].second + a[i - 1];
                }
                else if (dp[i].first == dp[i - 2].first + 1){
                    dp[i].second = max(dp[i].second,dp[i - 2].second + a[i - 1]);
                }
            }
        }
    }
    cout << dp[n].second << "\n";
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
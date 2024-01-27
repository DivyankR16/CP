#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, n) for (ll i = 0; i < n; i++)
// approach is predicting future using current but can it be done with knowing past and predicting present
//like we do in normal knapsack
ll colorfulKnapsack(ll w[], ll c[], ll n, ll m, ll x)
{
    bool dp[m][10005];
    vector<vector<ll>> v(m, vector<ll>());
    for (ll i = 0; i < n; i++)
    {
        v[c[i] - 1].push_back(w[i]);
    }
    for (ll i = 0; i < m; i++)
    {
        for (ll j = 0; j < 10005; j++)
        {
            dp[i][j] = 0;
        }
    }
    for (ll i = 0; i < v[0].size(); i++)
    {
        dp[0][v[0][i]] = 1;
    }
    for (ll i = 0; i < m - 1; i++)
    {
        for (ll j = 0; j <= x; j++)
        {
            if (dp[i][j])
            {
                for (ll k = 0; k < v[i + 1].size(); k++)
                {
                    if (j + v[i + 1][k] <= x)
                    {
                        dp[i + 1][j + v[i + 1][k]] = 1;
                    }
                }
            }
        }
    }
    for (ll i = x; i >= 0; i--)
    {
        if (dp[m - 1][i])
        {
            return x - i;
        }
    }
    return -1;
}
int main(){
    ll n, m, x;
    cin >> n >> m >> x;
    ll w[n], c[n];
    forn(i,n){
        cin >> w[i];
    }
    forn(i,n){
        cin >> c[i];
    }
    cout<<colorfulKnapsack(w,c,n,m,x)<<"\n";
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    ll p[n];
    forn(i, n) cin >> p[i];
    string s;
    cin >> s;
    vector<ll> dp(n, -1);
    forn(i,n){
        p[i]--;
    }
    forn(i, n)
    {
        if (dp[i] == -1)
        { 
            vector<ll> cycle;
            ll cnt = 0;
            ll cur = i;
            while (dp[cur] == -1)
            {
                cycle.push_back(cur);
                dp[cur] = 0;
                if (s[cur] == '0')
                    cnt++;
                cur = p[cur];
            }
            for (ll idx : cycle)
            {
                dp[idx] = cnt;
            }
        }
    }

    forn(i, n)
    {
        cout << dp[i] << " ";
    }
    cout << "\n";
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
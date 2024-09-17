#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    string s;
    cin >> s;
    ll n;
    cin >> n;
    vector<string> v;
    map<string, ll> mp;
    forn(i,n){
        string x;
        cin >> x;
        v.push_back(x);
        mp[x] = i;
    }
    ll N = s.size();
    vector<ll> dp(N+1, INT_MAX);
    dp[0] = 0;
    for (ll i = 1; i <=N;i++){
        for(auto cur:v){
            ll sz = cur.size();
            if(i>=sz){
                if(s.substr(i-sz,sz)==cur){
                    for (ll j = i - 1; j >= i - sz;j--){
                        if(dp[j]!=INT_MAX){
                            dp[i] = min(dp[i], dp[j] + 1);
                        }
                    }
                }
            }
        }
    }
    if(dp[N]!=INT_MAX){
        cout << dp[N] << "\n";
        ll cur = dp[N];
        ll j = N;
        for (ll i = N-1; i >= 0;i--){
            if(cur==0)
                break;
            if(dp[i]==cur-1){
                for (ll k = i + 1; (k >= max(1ll, j - 9)); k--)
                {
                    if(mp.find(s.substr(k-1,j-k+1))!=mp.end()){
                        cout << mp[s.substr(k - 1, j - k + 1)] + 1 << " " << k << "\n";
                        break;
                    }
                }
                j = i;
                cur--;
            }
        }
    }
    else{
        cout << -1 << "\n";
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
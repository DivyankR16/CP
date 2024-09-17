#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, m;
    cin >> n >> m;
    ll a[n];
    forn(i, n) cin >> a[i];
    map<ll, ll> mp;
    forn(i,n){
        mp[a[i]]++;
    }
    vector<ll> b;
    for(auto i:mp){
        b.push_back(i.first);
    }
    ll sz = b.size();
    ll ans = 0;
    for (ll i = 0; i < sz - 1;i++){
        if(b[i]+1==b[i+1]){
            if (b[i] * mp[b[i]] + b[i + 1] * mp[b[i + 1]]<=m){
                ans = max(ans, b[i] * mp[b[i]] + b[i + 1] * mp[b[i + 1]]);
            }
            else{
                for (ll j = 0; j <= min(mp[b[i]], (m/b[i]));j++){
                    ans = max(ans, min(((m - j * b[i]) / b[i + 1]),mp[b[i+1]]) * b[i + 1] + j * b[i]);
                }
            }
        }
        else{
            for (ll j = 0; j <=mp[b[i]];j++){
                if(b[i]*j<=m){
                    ans = max(ans, b[i] * j);
                }
                else{
                    break;
                }
            }
        }
    }
    for (ll j = 0; j <=mp[b[sz-1]]; j++)
    {
        if (b[sz-1] * j <= m)
        {
            ans = max(ans, b[sz-1] * j);
        }
        else{
            break;
        }
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
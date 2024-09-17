#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    string s;
    cin >> s;
    if(n%2==0){
        vector<ll> ecnt(26, 0);
        vector<ll> ocnt(26, 0);
        forn(i,n){
            if(i%2==0){
                ecnt[s[i] - 'a']++;
            }
            else{
                ocnt[s[i] - 'a']++;
            }
        }
        ll mxodd = *max_element(ocnt.begin(),ocnt.end());
        ll mxeven = *max_element(ecnt.begin(),ecnt.end());
        cout << n - mxeven - mxodd << "\n";
    }
    else{
        vector<vector<ll>> ebcnt(n, vector<ll>(26, 0));
        vector<vector<ll>> eacnt(n, vector<ll>(26, 0));
        vector<vector<ll>> obcnt(n, vector<ll>(26, 0));
        vector<vector<ll>> oacnt(n, vector<ll>(26, 0));
        for (ll i = 0; i < n;i++){
            if(i%2==0){
                ebcnt[i][s[i] - 'a']++;
                if(i){
                for (ll j=0; j < 26;j++){
                    ebcnt[i][j] += ebcnt[i - 1][j];
                    obcnt[i][j] += obcnt[i - 1][j];
                }
                }
            }
            else{
                obcnt[i][s[i] - 'a']++;
                for (ll j = 0; j < 26;j++){
                    obcnt[i][j] += obcnt[i - 1][j];
                    ebcnt[i][j] += ebcnt[i - 1][j];
                }
            }
        }
        for (ll i = n - 1; i >= 0;i--){
            if(i%2==0){
                eacnt[i][s[i] - 'a']++;
                if(i!=n-1){
                    for (ll j = 0; j < 26;j++){
                        eacnt[i][j] += eacnt[i + 1][j];
                        oacnt[i][j] += oacnt[i + 1][j];
                    }
                }
            }
            else{
                oacnt[i][s[i] - 'a']++;
                if(i!=n-1){
                    for (ll j = 0; j < 26;j++){
                        oacnt[i][j] += oacnt[i + 1][j];
                        eacnt[i][j] += eacnt[i + 1][j];
                    }
                }
            }
        }
        ll ans = INT_MAX;
        for (ll i = 0; i < n;i++){
            ll omx = 0;
            ll emx = 0;
            for (ll j = 0; j < 26;j++){
                emx = max(emx,(i - 1 >= 0 ? ebcnt[i - 1][j] : 0) + (i < n - 1 ? oacnt[i + 1][j] : 0));
                omx = max(omx,(i - 1 >= 0 ? obcnt[i - 1][j] : 0) + (i < n - 1 ? eacnt[i + 1][j] : 0));
            }
                ans = min(ans, n - omx - emx);
        }
        cout << ans << "\n";
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
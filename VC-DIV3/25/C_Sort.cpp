#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, q;
    cin >> n >> q;
    string a, b;
    cin >> a >> b;
    vector<vector<ll>> fa(n + 1, vector<ll>(26, 0));
    vector<vector<ll>> fb(n + 1, vector<ll>(26, 0));
    for (ll i = 1; i <= n;i++){
        for (ll j = 0; j < 26;j++){
            if(a[i-1]-'a'==j){
                fa[i][j] += fa[i - 1][j] + 1;
            }
            else{
                fa[i][j] = fa[i - 1][j];
            }
            if (b[i-1] - 'a' == j)
            {
                fb[i][j] += fb[i - 1][j] + 1;
            }
            else
            {
                fb[i][j] = fb[i - 1][j];
            }
        }
    }
        forn(i, q)
        {
            ll l, r;
            cin >> l >> r;
            ll cura[26];
            ll curb[26];
            memset(cura, 0, sizeof(cura));
            memset(curb, 0, sizeof(curb));
            for (ll i = 0; i < 26;i++){
                cura[i] += fa[r][i] - fa[l - 1][i];
                curb[i] += fb[r][i] - fb[l - 1][i];
            }
            ll diff = 0;
            for (ll i = 0; i < 26;i++){
                diff += abs(cura[i] - curb[i]);
            }
            cout << diff/2 << "\n";
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
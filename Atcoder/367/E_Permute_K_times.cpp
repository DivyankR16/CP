#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, k;
    cin >> n >> k;
    vector<vector<ll>> st(60, vector<ll>(n + 1, 0));
    for (ll i = 1; i <= n;i++)
    {
        cin >> st[0][i];
    }
    ll a[n];
    forn(i, n) cin >> a[i];
    for (ll i = 1; i < 60;i++){
        for (ll j = 1; j <= n;j++){
            st[i][j] = st[i - 1][st[i - 1][j]];    //Binary Lifting Very important for the question
        }
    }
    vector<ll> cst(n + 1, 0);
    for (ll i = 1; i <= n;i++){
        cst[i] = i;
    }
        for (ll i = 0; i < 60; i++)
        {
            for (ll j = 1; j <= n;j++){
                if(k%2){
                    cst[j] = st[i][cst[j]];
                }
            }
            k /= 2;
        }
        for (ll i = 1; i <= n;i++){
            cout << a[cst[i]-1] << " ";
        }
        cout << "\n";
}
int main(){
ios_base:: sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
solve();
return 0;
}
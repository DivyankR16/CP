#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, k;
    cin >> n >> k;
    vector<vector<ll>> a(n, vector<ll>(n, 0));
    ll val = k;
    while(val--){
        ll r, c;
        cin >> r >> c;
        r--;
        c--;
        a[r][c] = -1;
        for (ll i = 0; i < n;i++){
            a[r][i] = -1;
        }
        for (ll i = 0; i < n;i++){
            a[i][c] = -1;
        }
            if (r != c)
            {
                a[c][r] = -1;
                for (ll i = 0; i < n;i++){
                    a[c][i] = -1;
                }
                for (ll i = 0; i < n;i++){
                    a[i][r] = -1;
                }

            }
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
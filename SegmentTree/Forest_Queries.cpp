#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, q;
    cin >> n >> q;
char forest[n][n];
    forn(i,n){
        forn(j,n){
            cin >> forest[i][j];
        }
    }
ll preRowSum[n][n];
forn(i,n){
    forn(j,n){
        preRowSum[i][j] = 0;
    }
}
forn(i,n){
    forn(j,n){
        if(!j){
            preRowSum[i][j] = (forest[i][j]=='*'?1:0);
        }
        else{
            preRowSum[i][j] += (forest[i][j]=='*'?1:0) + preRowSum[i][j-1];
        }
    }
}
// forn(i, n)
// {
//     forn(j, n)
//     {
//         cout<<preRowSum[i][j] << " ";
//     }
//     cout << "\n";
// }
forn(i,q){
    ll x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    x1--;
    y1--;
    x2--;
    y2--;
    ll ans = 0;
    for (ll j = x1; j <= x2;j++){
        ans += (y1 ? preRowSum[j][y2] - preRowSum[j][y1-1] : preRowSum[j][y2]);
    }
    cout << ans << "\n";
}
}
int main(){
solve();
return 0;
}
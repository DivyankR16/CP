#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, m;
    cin >> n >> m;
    ll a[n][m];
    forn(i,n){
        forn(j,m){
            cin >> a[i][j];
        }
    }
    for (ll i = 0; i < n;i++){
        for (ll j = 0; j < m;j++){
            ll mx = -1;
            if(i+1<n){
                mx = max(mx, a[i + 1][j]);
            }
            if (i - 1 >= 0)
            {
                mx = max(mx, a[i - 1][j]);
            }
            if (j + 1 < m)
            {
                mx = max(mx, a[i][j+1]);
            }
            if (j - 1 >=0)
            {
                mx = max(mx, a[i][j-1]);
            }
            if(a[i][j]>mx){
                a[i][j] = mx;
            }
        }
    }
    forn(i,n){
        forn(j,m){
            cout << a[i][j] << " ";
        }
        cout << "\n";
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
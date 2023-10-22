#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    char a[n][n];
    forn(i,n){
        forn(j,n){
            cin >> a[i][j];
        }
    }
    ll ans = 0;
    forn(i,n/2){
        forn(j,n/2){
            ll arr[4];
            arr[0] = a[i][j] - 'a';
            arr[1] = a[j][n - i - 1] - 'a';
            arr[2] = a[n - i - 1][n - j - 1] - 'a';
            arr[3] = a[n - j - 1][i] - 'a';
            sort(arr, arr + 4);
            ans += 3 * arr[3] - (arr[0] + arr[1] + arr[2]);
        }
    }
        cout << ans << "\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
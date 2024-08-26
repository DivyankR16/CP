#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll a,b,c;
    cin >> a >> b >> c;
    ll ans = 0;
    for (ll i = 0; i <= 5;i++){
        for (ll j = 0; j <= 5-i;j++){
            for (ll k = 0; k <= 5 - i - j;k++){
                ans = max(ans, (a + i) * (b + j) * (c + k));
            }
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
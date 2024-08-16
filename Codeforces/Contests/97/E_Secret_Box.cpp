#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll x, y, z, k;
    cin >> x >> y >> z >> k;
    ll ans = 0;
    for (ll i = 1; i <= x;i++){
        for (ll j = 1; j <= y;j++){
            if(k%(i*j)==0){
                ll ts = k / (i * j);
                if(ts<=z){
                    ll pos = (x - i + 1) * (y - j + 1) * (z - ts + 1);
                    ans = max(ans, pos);
                }
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
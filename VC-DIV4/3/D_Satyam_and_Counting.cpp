#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    vector<bool> xy0(n+1, 0);
    vector<bool> xy1(n+1, 0);
    ll ans = 0;
    forn(i,n){
        ll x, y;
        cin >> x >> y;
        if(y==0){
            if(xy1[x]){
                ans += (n - 2);
            }
            xy0[x] = 1;
        }
        if(y==1){
            if(xy0[x]){
                ans += (n - 2);
            }
            xy1[x] = 1;
        }
    }
    for (ll i = 0; i <= n - 2;i++){
        if(xy0[i] && xy0[i+2] && xy1[i+1]){
            ans++;
        }
        if(xy1[i] && xy1[i+2] && xy0[i+1]){
            ans++;
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
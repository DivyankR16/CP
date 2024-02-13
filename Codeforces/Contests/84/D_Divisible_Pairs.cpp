#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, x, y;
    cin >> n >> x >> y;
    ll a[n];
    forn(i, n) cin >> a[i];
    vector<ll> x1;
    vector<ll> x2;
    forn(i,n){
        x1.push_back(a[i] % x);
        x2.push_back(a[i] % y);
    }
    map<ll, map<ll, ll>> mp;
    forn(i,n){
        mp[x1[i]][x2[i]]++;
    }
    ll ans = 0;
    forn(i,n){
        ll need = mp[(x - x1[i]) % x][x2[i]];
        if (x1[i] % x == (x - x1[i]) % x){
            ans += need - 1;
        }
        else{
            ans += need;
        }
    }
    ans /= 2;
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
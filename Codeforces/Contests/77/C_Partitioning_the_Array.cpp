#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    ll a[n];
    forn(i, n) cin >> a[i];
    vector<ll> f;
    for (ll i = 1; i * i <= n;i++){
        if(n%i==0){
            f.push_back(i);
            if(i!=n/i){
                f.push_back(n / i);
            }
        }
    }
    ll ans = 0;
    for(auto i:f){
        ll val = -1;
        ll idx = 0;
        while(idx+i<n){
        if(val==-1){
            val = abs(a[idx] - a[idx + i]);
        }
        else{
            val = __gcd(val, abs(a[idx] - a[idx + i]));
        }
        idx++;
        }
        if(val!=1){
            ans++;
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
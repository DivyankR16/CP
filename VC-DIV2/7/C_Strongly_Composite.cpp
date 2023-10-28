#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    ll a[n];
    forn(i, n) cin >> a[i];
    map<ll, ll> primeDivisors;
    forn(i,n){
        ll x = a[i];
        for (ll i = 2; i * i <= x;i++){
            while(x%i==0){
                primeDivisors[i]++;
                x /= i;
            }
        }
        if(x>1)
            primeDivisors[x]++;
    }
    ll ans = 0;
    ll rem = 0;
    for(auto i:primeDivisors){
        ans += i.second / 2;
        rem += i.second % 2;
    }
    ans += rem / 3;
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
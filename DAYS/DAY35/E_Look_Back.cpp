#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
ll power2(ll x){
    ll ans = 0;
    while(x>1){
        ans++;
        x /= 2;
    }
    return ans;
}
void solve(){
    ll n;
    cin >> n;
    ll first;
    cin >> first;
    ll power2x[n - 1];
    memset(power2x, 0, sizeof(power2x));
    forn(i,n-1){
        ll second;
        cin >> second;
        if(i){
            power2x[i] = power2x[i - 1];
        }
        if(first>second){
            ll cur = second;
            while(cur<first){
                cur *= 2;
                power2x[i]++;
            }
        }
        else if(second>first){
            ll cur = first;
            while(cur*2<=second){
                power2x[i] = max(0ll, power2x[i] - 1);
                cur *= 2;
            }
        }
        first = second;
    }
    ll ans = 0;
    forn(i,n-1){
        ans += power2x[i];
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
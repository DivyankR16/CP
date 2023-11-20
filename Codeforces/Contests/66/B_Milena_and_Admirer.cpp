#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    ll a[n];
    forn(i, n) cin >> a[i];
    ll ans = 0;
    ll nextnum = a[n - 1];
    for (ll i = n - 2; i >= 0;i--){
        if(a[i]<=nextnum){
            nextnum = a[i];
        }
        else{
            ll val = (a[i]+nextnum-1)/nextnum;
            ans += val - 1;
            nextnum = a[i] / val;
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
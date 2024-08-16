#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
ll modPower(ll x, ll n,ll mod)
{
    if (n == 0)
    {
        return 1;
    }
    ll val = modPower(x, n / 2,mod);
    val = (val*val)%mod;
    if (n % 2 == 1)
    {
        val =(val*x)%mod;
    }
    return val%mod;
}
void solve(){
    ll l, r, k;
    cin >> l >> r >> k;
    if(k>=10){
        cout << 0 << "\n";
        return;
    }
    ll ans = 0;
    ll mod = 1e9+7;
    ans += (modPower(9 / k+1,r, 1e9+7)-modPower(9 / k+1,l, 1e9+7)+mod)%mod;
    cout << ans<< "\n";
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
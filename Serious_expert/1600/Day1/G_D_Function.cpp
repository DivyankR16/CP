#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
ll logpower(ll a,ll n,ll mod){
    if(n==0){
        return 1;
    }
    ll ans = logpower(a, n / 2,mod);
    ans = (ans*ans)%mod;
    if(n%2==1){
        ans = (ans*a)%mod;
    }
    return ans%mod;
}
void solve(){
    ll mod = 1e9 + 7;
    ll l, r, k;
    cin >> l >> r >> k;
    if(k>=10){
        cout << 0 << "\n";
        return;
    }
    ll pos = 9 / k + 1;
    ll rlim = logpower(pos, r, mod);
    ll llim = logpower(pos, l, mod);
    cout << (rlim - llim + mod) % mod<< "\n";
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
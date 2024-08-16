#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
const ll N = 2e5 + 1;
ll dp[N];
void solve(){
    ll l, r;
    cin >> l >> r;
    ll ans = 0;
    ll val = l;
    while(val){
        ans+=2;
        val /= 3;
    }
    cout << ans + dp[r] - dp[l]<<"\n";
}
int main(){
ios_base:: sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
for (ll i = 1; i < N;i++){
    ll ans = 0;
    ll val = i;
    while(val){
        ans++;
        val /= 3;
    }
    dp[i] += dp[i - 1] + ans;
}
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
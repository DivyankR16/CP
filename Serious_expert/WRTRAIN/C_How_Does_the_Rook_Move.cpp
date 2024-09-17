#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, k;
    cin >> n >> k;
    ll free = n;
    forn(i,k){
        ll r, c;
        cin >> r >> c;
        if(r==c){
            free--;
        }
        else{
            free -= 2;
        }
    }
    ll mod = 1e9 + 7;
    vector<ll> dp(free + 1, -1);
    auto solver = [&](auto &self,ll x) -> ll {
        if(x==free){
            return 1;
        }
        if (dp[x] != -1)
            return dp[x];
        ll ans = 0;
        ans = (ans+self(self,x + 1))%mod;
        if(x+2<=free){
        ans =(ans+ (2 * (free-x-1)*self(self, x + 2))%mod)%mod;
        }
        return dp[x] =ans;
    };
    cout<<solver(solver, 0)<<"\n";
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
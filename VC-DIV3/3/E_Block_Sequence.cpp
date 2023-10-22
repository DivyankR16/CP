#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
const ll maxx = 3e5;
ll a[maxx];
vector<ll> memo;
ll recur(ll indx,ll n){
    if(indx==n){
        return 0;
    }
    if(memo[indx]!=-1)
        return memo[indx];
    ll ans = LONG_LONG_MAX;
    if(indx+a[indx]+1<=n){
        ans = min(ans, recur(indx + a[indx] + 1, n));
    }
    ans =min(ans,1+ recur(indx + 1, n));
    // cout << "Just Checking:-> " << ans << "\n";
    return memo[indx]=ans;
}
void solve(){
    ll n;
    cin >> n;
    memo.clear();
    memo.resize(n, -1);
    forn(i, n)
    {
        ll x;
        cin >> x;
        a[i] = x;
    }
    cout<<recur(0, n)<<"\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll r;
    cin >> r;
    ll ans = 0;
    for (ll x = 0; x < r;x++){
        double yl = sqrt(r * r - x * x);
        double yu = sqrt((r + 1) * (r + 1) - x * x);
        ll iyl = ceil(yl);
        ll iyu = floor(yu);
        ans += max(0ll, iyu - iyl + 1);
    }
    cout<<ans<<"\n";
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
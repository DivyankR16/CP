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
        ll num = a[i];
        if(num>nextnum){
                ll val = max((num / nextnum) - 1, 0ll);
                ans += val;
                num -= val * nextnum;
        }
        if(num>nextnum){
                nextnum = num / 2;
                ans++;
        }
        else{
            nextnum = num;
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
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll k;
    cin >> k;
    ll l = 1;
    ll r = 2e18;
    ll ans = 0;
    while(l<=r){
        ll m = l + (r - l) / 2;
        ll sm = sqrtl(m);
        while(sm*sm<=m){
            sm++;
        }
        while(sm*sm>m){
            sm--;
        }
        if(m-sm>=k){
            ans = m;
            r = m - 1;
        }
        else{
            l = m + 1;
        }
    }
    cout << ans << "\n";
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
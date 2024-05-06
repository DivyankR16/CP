#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    ll a[n];
    forn(i, n) cin >> a[i];
    ll l = 0;
    ll r = n - 1;
    while(l<n && a[l]==0)l++;
    while(r>=0 && a[r]==0)r--;
    ll ans = 0;
    for (ll i = l; i <= r;i++){
        if(a[i]==0){
            ans++;
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
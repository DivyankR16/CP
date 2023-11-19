#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    ll a[n];
    forn(i, n) cin >> a[i];
    ll minval = LONG_LONG_MAX;
    ll minidx = -1;
    forn(i,n){
        if(a[i]<minval){
            minval = a[i];
            minidx = i;
        }
    }
    ll ans = 0;
    forn(i,n){
        if(i<minidx){
            ans++;
        }
        else{
            break;
        }
    }
    for (ll i = minidx; i < n-1;i++){
        if(a[i+1]<a[i]){
            cout << -1 << "\n";
            return;
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
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, m, k;
    cin >> n >> m >> k;
    ll a[n], b[m];
    forn(i, n) cin >> a[i];
    forn(i, m) cin >> b[i];
    map<ll, ll> mp1;
    map<ll, ll> mp2;
    forn(i,m){
        mp1[b[i]]++;
    }
    forn(i,k){
        mp2[a[i]]++;
    }
    ll ans = 0;
    if(mp1==mp2){
        ans++;
    }
    for (ll i = k; i < n;i++){
        mp2[a[i]]++;
        mp2[a[i - k]]--;
        if(mp2[a[i-k]]==0){
            mp2.erase(a[i - k]);
        }
        if(mp1==mp2){
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
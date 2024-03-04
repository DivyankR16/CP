#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    ll a[n];
    forn(i, n) cin >> a[i];
    multiset<ll> s;
    ll ans = 0;
    ll val = (1 << 31) - 1;
    for (ll i = 0; i < n;i++){
        // cout << ~a[i] << "\n";
        if(s.find(val^a[i])!=s.end()){
            auto itr = s.find(val^a[i]);
            s.erase(itr);
        }
        else{
            ans++;
            s.insert(a[i]);
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
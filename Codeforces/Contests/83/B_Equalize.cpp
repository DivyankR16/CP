#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    set<ll> s;
    forn(i,n){
        ll x;
        cin >> x;
        s.insert(x);
    }
    vector<ll> a;
    for(auto i:s){
        a.push_back(i);
    }
    ll l = 0;
    ll ans = 1;
    for (ll i = 0; i<a.size();i++){
       if(a[i]-a[l]>=n){
           l++;
       }
       ans = max(ans, i - l + 1);
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
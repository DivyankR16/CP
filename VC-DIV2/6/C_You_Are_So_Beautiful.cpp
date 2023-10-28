#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    ll a[n];
    forn(i, n) cin >> a[i];
    set<ll> s;
    vector<bool> rightMostSuffix(n);
    for (ll i = n - 1; i >= 0;i--)
    {
        if(s.find(a[i])==s.end()){
            rightMostSuffix[i] = 1;
            s.insert(a[i]);
        }
    }
    set<ll> s2;
    ll ans = 0;
    forn(i,n){
        s2.insert(a[i]);
        if(rightMostSuffix[i])
            ans += s2.size();
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
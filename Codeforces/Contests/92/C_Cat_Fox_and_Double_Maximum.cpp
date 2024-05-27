#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    ll a[n];
    forn(i, n) cin >> a[i];
    vector<ll> need;
    for (ll i = 1; i < n - 1;i+=2){
        ll val = max(a[i - 1], a[i + 1]) - a[i];
        need.push_back(val);
    }
    vector<ll> ans(n, 0);
    sort(need.begin(), need.end());
    
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
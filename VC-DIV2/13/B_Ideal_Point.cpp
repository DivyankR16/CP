#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, k;
    cin >> n >> k;
    vector<pair<ll, ll>> segments;
    forn(i,n){
        ll l, r;
        cin >> l >> r;
        segments.push_back({l, r});
    }
    map<ll, ll> cnt;
    for(auto i:segments){
        ll l = i.first;
        ll r=i.second;
        if(k>=l && k<=r){
            for (ll j = l; j <= r;j++){
                cnt[j]++;
            }
        }
    }
    ll sum = 0;
    ll check = cnt[k];
    if(check==0){
        cout << "NO"
             << "\n";
        return;
    }
    for(auto i:cnt){
        if(i.first!=k && i.second==check){
            cout << "NO"
                 << "\n";
            return;
        }
    }
    cout << "YES" << "\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
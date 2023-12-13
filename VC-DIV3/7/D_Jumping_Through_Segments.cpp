#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
bool isPossible(ll k,vector<pair<ll,ll>>&segments){
    ll left = 0;
    ll right = 0;
    for(auto v:segments){
        left = max(v.first, left - k);
        right = min(v.second, right + k);
        if(left>right){
            return false;
        }
    }
    return true;
}
void solve(){
    ll n;
    cin >> n;
    vector<pair<ll, ll>> segments;
    forn(i,n){
        ll l, r;
        cin >> l >> r;
        segments.push_back({l, r});
    }
    ll l = 0;
    ll r = 1e9 + 1;
    ll ans = 0;
    while(l<=r){
        ll mid = l + (r - l) / 2;
        if(isPossible(mid,segments)){
            r = mid - 1;
            ans = mid;
        }
        else{
            l = mid + 1;
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
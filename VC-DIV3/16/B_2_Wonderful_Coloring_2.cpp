#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, k;
    cin >> n >> k;
    ll a[n];
    forn(i, n) cin >> a[i];
    map<ll, vector<ll>> mp;
    forn(i,n){
        mp[a[i]].push_back(i);
    }
    ll ans[n];
    ll delta = 0;
    memset(ans, 0, sizeof(ans));
    vector<ll> left;
    for(auto i:mp){
        if(i.second.size()>=k){
            for (ll j = 0; j < min(k,(ll)i.second.size());j++){
                ans[i.second[j]] = j+1;
            }
        }
        else{
            for (ll j = 0; j < i.second.size();j++){
                left.push_back(i.second[j]);
            }
        }
    }
    // for(auto i:left){
    //     cout << i << " ";
    // }
    // cout << "\n";
    ll loopi = left.size() / k;
    loopi *= k;
    ll var = 0;
    while(var<loopi){
        ans[left[var]] = var % k+1;
        var++;
    }
    for(auto i:ans){
        cout << i << " ";
    }
    cout << "\n";
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
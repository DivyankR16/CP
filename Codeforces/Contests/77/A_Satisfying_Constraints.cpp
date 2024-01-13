#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    ll u = INT_MAX;
    ll l = INT_MIN;
    set<ll> s;
    forn(i,n){
        ll type, val;
        cin >> type>> val;
        if(type==1){
            l = max(l, val);
        }
        else if(type==2){
            u = min(u, val);
        }
        else{
            s.insert(val);
        }
    }
    // for(auto i:s){
    //     cout << i << " ";
    // }
    // cout << l << " " << u;
    // cout << "\n";
    // ll ans = 0;
    if(l>u){
        cout << 0 << "\n";
        return;
    }
    ll cnt = 0;
    for(auto i:s){
        if(i>=l && i<=u){
            cnt++;
        }
    }
    cout << u - l + 1 - cnt << "\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
vector<ll> dp;
void build(vector<ll>&a,ll segleft,ll segright,ll ans){
    if(segright<segleft){
        return;
    }
    if(segleft==segright){
        dp[segleft] = ans;
        return;
    }
    ll mxidx = segleft;
    ll val = a[mxidx];
    for (ll i = segleft; i <= segright;i++){
        if(a[i]>val){
            val = a[i];
            mxidx = i;
        }
    }
    dp[mxidx] = ans;
    build(a, segleft, mxidx - 1, ans + 1);
    build(a, mxidx+1, segright, ans + 1);
}
void solve(){
    ll n;
    cin >> n;
    vector<ll> a;
    forn(i,n){
        ll x;
        cin >> x;
        a.push_back(x);
    }
    dp.resize(n, 0);
    build(a, 0, n - 1, 0);
    for(auto i:dp){
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
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
vector<ll>tree;
ll build(vector<ll>&a){
    ll n = a.size();
    while(__builtin_popcountll(n)!=1){
        n++;
        a.push_back(0);
    }
    forn(i,n){
        tree[i + n] = a[i];
    }
    for (ll i = n - 1; i >= 1;i--){
        tree[i] = tree[2 * i] + tree[2 * i + 1];
    }
    return n;
}
ll query(ll node,ll segleft,ll segright,ll qleft,ll qright){
    if(qleft>segright || qright<segleft){
        return 0;
    }
}
void solve(){
    ll n;
    cin >> n;
    ll a[n];
    forn(i, n) cin >> a[i];
    ll sum = 0;
    ll prev = 0;
    ll ans = 0;
    set<ll> s;
    // s.insert(0);
    for (ll i = 0; i < n;i++){
        sum += a[i];
        ll val = (sum & 1?-1:sum/2);
        s.insert(a[i]);
        if(s.find(val)!=s.end()){
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
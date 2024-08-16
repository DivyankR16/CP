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
ll lcm(ll a,ll b){
    return (a / __gcd(a, b))*b;
}
void solve(){
    ll n;
    cin >> n;
    ll a[n];
    forn(i, n) cin >> a[i];
    ll val = 1;
    ll mx = *max_element(a, a + n);
    for (ll i = 0; i < n;i++){
        if(lcm(val,a[i])>mx){
            cout << n << "\n";
            return;
        }
        val = lcm(val, a[i]);
    }
    map<ll, ll> dp,need;
    dp[1] = 0;
    need = dp;
    for (ll i = 0; i < n;i++){
        for(auto e:need){
            ll nlcm = lcm(e.first, a[i]);
            need[nlcm] = max(dp[nlcm], e.second + 1);
        }
        dp = need;
    }
    ll ans = 0;
    // cout << dp.size() << "\n";
    set<ll> s(a, a + n);
    for(auto i:dp){
        cout << i.first << " " << i.second << "\n";
        if(s.find(i.first)==s.end()){
            ans = max(ans, i.second);
        }
    }
    // cout << ans << "\n";
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
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, k, q;
    cin >> n >> k >> q;
    ll a[n];
    forn(i, n) cin >> a[i];
    vector<ll>b;
    forn(i,n){
        b.push_back(a[i] - i);
    }
    map<ll, ll> mp;
    multiset<ll> s;
    for (ll i = 0; i < k;i++){
        if(s.find(mp[b[i]])!=s.end()){
        s.erase(s.find(mp[b[i]]));
        }
        mp[b[i]]++;
        s.insert(mp[b[i]]);
    }
    vector<ll> ans(n, -1);
    ans[k - 1] = k - *s.rbegin();
    for (ll i = k; i < n;i++){
        if (s.find(mp[b[i]])!=s.end()){
            s.erase(s.find(mp[b[i]]));
        }
        mp[b[i]]++;
        s.insert(mp[b[i]]);
        ll prev = i - k;
        s.erase(s.find(mp[b[prev]]));
        mp[b[prev]]--;
        s.insert(mp[b[prev]]);
        ll cur = k - *s.rbegin();
        ans[i] = cur;
    }
        while (q--)
        {
            ll l, r;
            cin >> l >> r;
            l--;
            r--;
            cout << ans[r] << "\n";
        }
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
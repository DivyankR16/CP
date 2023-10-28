#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, m;
    cin >> n >> m;
    ll a[n];
    a[0] = m;
    for (ll i = 1; i < n;i++){
        cin >> a[i];
    }
    vector<ll> b;
    forn(i, n){
        ll x;
        cin >> x;
        b.push_back(x);
    }
    sort(b.begin(), b.end());
    sort(a, a + n);
    ll ans = 0;
    for (ll i = 1; i < n;i++)
    {
        auto it = upper_bound(b.begin(), b.end(),a[i]);
        if(it!=b.end()){
            b.erase(it);
        }
        else{
            ans++;
        }
    }
    ll ele = -1;
    if(b.size()>0){
        ele = b[b.size() - 1];
    }
    if(ele==-1){
        cout << ans << "\n";
        return;
    }
    if(m>=ele){
        cout << (ans + 1) * max(0ll,(ele - 1)) + (m - ele + 1) * ans << "\n";
    }
    else{
        cout << (ans + 1) * m << "\n";
    }
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
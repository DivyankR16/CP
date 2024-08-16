#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, k;
    cin >> n >> k;
    vector<ll> a;
    forn(i,n){
        ll x;
        cin >> x;
        a.push_back(x);
    }
    sort(a.begin(), a.end(), [](ll a, ll b)
         { return a > b; });
    ll ans = 0;
    for (ll i = 1; i < n;i+=2){
        if(k==0)
            break;
        ll diff = a[i - 1] - a[i];
        a[i] += min(k,diff);
        k -= min(k, diff);
    }
    ll ca = 0;
    ll cb = 0;
    forn(i,n){
        if(i%2==0){
            ca += a[i];
        }
        else{
            cb += a[i];
        }
    }
    cout << abs(ca-cb) << "\n";
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
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    multiset<ll> C;
    multiset<ll> x;
    multiset<ll> y;
    forn(i,2*n){
        ll x1;
        cin >> x1;
        C.insert(x1);
    }
    vector<ll> X;
    vector<ll> Y;
    ll cnt = 0;
    for(auto i:C){
        if(cnt<n){
            X.push_back(i);
        }
        else{
            Y.push_back(i);
        }
        cnt++;
    }
    ll ans = 0;
    ll sz = X.size();
    forn(i,sz-1){
        ans += X[i + 1] - X[i];
        ans += Y[i + 1] - Y[i];
    }
    cout << ans << "\n";
    forn(i,n){
        cout << X[i] << " " << Y[i] << "\n";
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
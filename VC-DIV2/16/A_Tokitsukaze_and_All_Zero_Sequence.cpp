#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    ll a[n];
    forn(i, n) cin >> a[i];
    map<ll, ll> cnt;
    forn(i,n){
        cnt[a[i]]++;
    }
    ll nonzero = 0;
    forn(i,n){
        if(a[i]!=0)
            nonzero++;
    }
    if(nonzero<n){
        cout << nonzero << "\n";
        return;
    }
    for(auto i:cnt){
        if(i.second>1){
            cout << n << "\n";
            return;
        }
    }
    cout << n + 1 << "\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
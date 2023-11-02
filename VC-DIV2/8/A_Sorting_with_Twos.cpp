#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    ll a[n];
    forn(i, n) cin >> a[i];
    vector<bool> isSortedidx(n,1);
    // memset(isSortedidx, 0, sizeof(isSortedidx))
    for (ll i = 0; i < n-1;i++){
        if(a[i+1]<a[i]){
            isSortedidx[i] = 0;
        }
    }
    for (ll i = 1; i < n;i++){
        if(!isSortedidx[i] && __builtin_popcountll(i+1)!=1){
            cout << "NO"
                 << "\n";
            return;
        }
    }
    cout << "YES"
         << "\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}

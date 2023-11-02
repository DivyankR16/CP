#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, q;
    cin >> n >> q;
    ll a[n];
    forn(i, n) cin >> a[i];
    vector<bool>vis(31, 0);
    forn(i,q){
        ll x;
        cin >> x;
        if(!vis[x]){
        for (ll i = 0; i < n;i++){
            if(a[i]%(1<<x)==0){
                a[i] += (1 << (x - 1));
            }
        }
        vis[x] = 1;
        }
    }
    for(auto i:a){
        cout << i << " ";
    }
    cout << "\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
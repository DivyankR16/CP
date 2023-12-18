#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    vector<ll> adj[n];
    forn(i,n-1){
        ll x, y;
        cin >> x >> y;
        x--;
        y--;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    ll ans = 0;
    forn(i,n){
        if(adj[i].size()==1){
            ans++;
        }
    }
    cout << (ans + 1) / 2 << "\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
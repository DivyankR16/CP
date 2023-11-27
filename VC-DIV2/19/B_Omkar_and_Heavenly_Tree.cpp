#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, m;
    cin >> n >> m;
    bool mark[n + 1];
    for (ll i = 1; i <= n;i++){
        mark[i] = 0;
    }
    forn(i,m){
        ll a, b, c;
        cin >> a >> b >> c;
        mark[b] = 1;
    }
    ll node = -1;
    for (ll i = 1; i <= n;i++){
        if(mark[i]==0){
            node = i;
            break;
        }
    }
    for (ll i = 1; i <= n;i++){
        if(i!=node){
            cout << node << " " << i << "\n";
        }
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
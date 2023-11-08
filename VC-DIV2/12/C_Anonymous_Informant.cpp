#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, k;
    cin >> n >> k;
    ll a[n];
    forn(i, n) cin >> a[i];
    vector<bool> vis(n, 0);
    ll idx = n - 1;
    while(true && k){
        if(a[idx]>n){
            cout << "No" << '\n';
            return;
        }
        vis[idx] = 1;
        idx -= a[idx];
        if(idx<0){
            idx += n;
        }
        if(vis[idx]==1){
            break;
        }
        k--;
    }
    // if(k==0){
    //     cout << "No"
    //          << "\n";
    //     return;
    // }
    cout << "Yes" << '\n';
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
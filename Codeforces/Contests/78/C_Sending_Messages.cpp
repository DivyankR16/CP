#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, f, a, b;
    cin >> n >> f >> a >> b;
    ll arr[n];
    forn(i, n) cin >> arr[i];
    ll charge = f;
    for (ll i = 0; i < n;i++){
        if(!i){
            ll diff = arr[i] - 0;
            charge -= min(diff * a, b);
        }
        else{
            ll diff = arr[i] - arr[i - 1];
            charge -= min(diff * a, b);
        }
        if (charge <= 0)
        {
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
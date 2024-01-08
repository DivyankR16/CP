#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    ll a[n];
    forn(i, n) cin >> a[i];
    forn(i,n){
        ll cnt = 0;
        for (ll j = 2; j <= min(i+2,40ll);j++){
            if(a[i]%j==0){
                cnt++;
            }
        }
        if(min(i+2,40ll)-1==cnt){
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
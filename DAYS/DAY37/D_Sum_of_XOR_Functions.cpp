#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    ll a[n];
    forn(i, n) cin >> a[i];
    ll prexor[n];
    prexor[0] = a[0];
    for (ll i = 1; i < n;i++){
        prexor[i] = prexor[i - 1] ^ a[i];
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
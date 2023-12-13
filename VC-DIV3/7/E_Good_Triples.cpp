#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin >> n;
ll ans = 1;
while(n){
    ll digit = n % 10;
    ans *= (digit + 1) * (digit + 2) / 2;
    n /= 10;
}
cout << ans << "\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
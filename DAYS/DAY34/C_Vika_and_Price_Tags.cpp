#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
ll calc(ll a,ll b){
    if(a==0)
        return 0;
    if(b<2*a)
        return 1 + calc(b, abs(a - b));
    ll m = b / (2 * a);
    return 3 * m + calc(a, b - 2 * m * a);
}
// ll calc(ll a,ll b){
//     if(a==0)
//         return 0;
//     if(b==0)
//         return 1;
//     return 1 + calc(b, abs(a - b));
// }
void solve(){
ll n;
cin >> n;
ll a[n],b[n];
forn(i, n) cin >> a[i];
forn(i, n) cin >> b[i];
set<ll> s;
forn(i,n){
    if(a[i]==0 && b[i]==0)
        continue;
    s.insert(calc(a[i], b[i]) % 3);
}
if(s.size()<=1){
        cout << "YES"
             << "\n";
}
else{
        cout << "NO"
             << "\n";
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
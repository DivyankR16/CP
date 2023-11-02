#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    ll a[n];
    forn(i, n) cin >> a[i];
    sort(a, a + n);
    ll i = 0;
    ll j = n - 1;
    ll x = 0;
    ll ans = 0;
    while(i<j){
       if(a[i]+x<a[j]){
           x += a[i];
           ans += a[i];
           i++;
       }
       else if(a[i]+x==a[j]){
           ans += a[i] + 1;
           x = 0;
           i++;
           j--;
       }
       else{
           ans += a[j] - x + 1;
           a[i] -= a[j] - x;
           j--;
           x = 0;
       }
    }
    if(i==j){
       ll val = a[i] - x;
       if(a[i]==1){
           ans += 1;
       }
       else if(val%2==0){
           ans += val / 2 + 1;
       }
       else{
           ans += val / 2 + 2;
       }
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
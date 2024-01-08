#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin >> n;
ll a[n];
forn(i, n) cin >> a[i];
ll diff = 0;
forn(i,n){
    diff = max(diff, a[i] - i - 1);
}
cout << diff << "\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
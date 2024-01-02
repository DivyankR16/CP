#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,k;
cin >> n >> k;
ll p = 1;
ll a[n];
forn(i,n){
    cin >> a[i];
    p *= a[i];
}
if(2023%p==0){
    cout << "YES"
         << "\n";
    cout << 2023 / p << " ";
    forn(i,k-1){
        cout << 1 << " ";
    }
    cout << "\n";
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
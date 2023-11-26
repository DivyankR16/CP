#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin >> n;
ll a[n];
forn(i, n) cin >> a[i];
if(a[0]==1){
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
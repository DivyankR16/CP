#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll x, y;
    cin >> x >> y;
    if(x<=y){
        cout << y - y % x / 2 << "\n";
    }
    else{
        cout << x + y << "\n";
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
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll x, y, k;
    cin >> x >> y >> k;
    if(x>y){
        cout << x << "\n";
        return;
    }
    else{
        ll extratime = 0;
        cout << y + max(y - x - k, 0ll) << '\n';
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
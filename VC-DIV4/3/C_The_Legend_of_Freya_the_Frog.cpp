#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll x, y, k;
    cin >> x >> y >> k;
    if ((x + k - 1) / k > (y + k - 1) / k){
        cout << 2 * ((x + k - 1) / k) - 1 << "\n";
    }
    else{
        cout << 2 * ((y + k - 1) / k) << "\n";
    }
}
int main(){
ios_base:: sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
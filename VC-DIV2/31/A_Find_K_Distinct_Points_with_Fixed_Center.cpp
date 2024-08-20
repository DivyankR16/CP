#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll x, y, k;
    cin >> x >> y >> k;
    if(k&1){
        cout << x << " " << y << "\n";
    k--;
    }
    ll p = 1;
    while(k){
        cout << x - p << " " << y - p << "\n";
        cout << x + p << " " << y + p << "\n";
        k -= 2;
        p++;
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
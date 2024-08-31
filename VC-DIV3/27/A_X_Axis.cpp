#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll x, y, z;
    cin >> x >> y >> z;
    vector<ll> a;
    a.push_back(x);
    a.push_back(y);
    a.push_back(z);
    sort(a.begin(), a.end());
    cout << a[1]-a[0]+a[2]-a[1] << "\n";
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
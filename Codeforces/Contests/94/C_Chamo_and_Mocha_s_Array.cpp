#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    ll a[n];
    forn(i, n) cin >> a[i];
    if(n==2){
        cout << min(a[0], a[1]) << "\n";
        return;
    }
    ll ans = 0;
    for (ll i = 1; i < n - 1;i++){
        ans = max(ans, min(a[i - 1], a[i]));
        ans = max(ans, min(a[i], a[i+1]));
        vector<ll> temp;
        temp.push_back(a[i - 1]);
        temp.push_back(a[i]);
        temp.push_back(a[i + 1]);
        sort(temp.begin(), temp.end());
        ans = max(ans, temp[1]);
    }
    cout << ans << "\n";
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
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin >> n;
ll a[n];
forn(i, n) cin >> a[i];
set<ll> s;
for (ll i = 0; i < n;i++){
    s.insert(a[i] + i + 1);
}
vector<ll> ans;
for(auto i:s){
    ans.push_back(i);
}
reverse(ans.begin(), ans.end());
for(auto i:ans){
    cout << i << " ";
}
cout << "\n";
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
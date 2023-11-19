#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin >> n;
ll a[n];
forn(i, n) cin >> a[i];
map<ll, ll> mp;
forn(i,n){
    mp[a[i]]++;
}
ll ans = 0;
ll cnt1 = 0;
ll cnt2 = 0;
for(auto i:mp){
    ans += (i.second - 1)*i.second/2;
    if(i.first==1){
        cnt1 += i.second;
    }
    if(i.first==2){
        cnt2 += i.second;
    }
}
ans += cnt1 * cnt2;
cout << ans << "\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
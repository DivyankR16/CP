#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    string s;
    cin >> s;
    map<char, ll> mp;
    ll ans = 0;
    ll val = 0;
    forn(i,n){
        if(mp.find(s[i])==mp.end()){
            mp[s[i]]++;
            val++;
        }
        ans += val;
    }
    cout << ans<<"\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
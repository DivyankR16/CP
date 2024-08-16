#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n,m;
    cin >> n >> m;
    string s;
    cin >> s;
    map<char, ll> mp;
    forn(i,n){
        mp[s[i]]++;
    }
    ll ans = 0;
    for (ll i = 0; i < 7;i++){
        if(mp[i+'A']<m){
            ans += m - mp[i + 'A'];
        }
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
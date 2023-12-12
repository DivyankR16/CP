#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    string s;
    cin >> s;
    map<ll, ll> cnt;
    forn(i,n){
        cnt[s[i] - 'a']++;
    }
    ll val = n / 2;
    ll maxcnt = 0;
    for(auto i:cnt){
        maxcnt = max(maxcnt, i.second);
    }
    if(n%2==1){
        cout << max(1ll, 2 * maxcnt - n) << "\n";
        return;
    }
    cout << max(0ll, 2*maxcnt - n) << "\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
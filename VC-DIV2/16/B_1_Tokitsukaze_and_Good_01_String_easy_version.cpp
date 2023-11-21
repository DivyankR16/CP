#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    string s;
    cin >> s;
    vector<ll> seglen;
    ll i = 0;
    while(i<n){
        ll cnt = 1;
        while(i<n-1 && s[i]==s[i+1]){
            cnt++;
            i++;
        }
        seglen.push_back(cnt);
        i++;
    }
    ll ans = 0;
    ll sz = seglen.size();
    ll j = 0;
    while(j<sz){
        if(j<sz-1 && seglen[j]%2==1){
            ans++;
            seglen[j + 1]--;
        }
        j++;
    }
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
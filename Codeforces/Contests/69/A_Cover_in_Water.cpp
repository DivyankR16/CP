#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll i = 0;
    ll ans = 0;
    while(i<n){
        ll cnt = 0;
        while(i<n && s[i]=='.'){
            cnt++;
            i++;
        }
        if(cnt>=3){
            cout << 2 << "\n";
            return;
        }
        ans += min(cnt, 2ll);
        i++;
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
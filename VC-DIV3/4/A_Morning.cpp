#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    string s;
    cin >> s;
    ll ans = 4;
    ans += abs((s[0] == '0' ? 10 : s[0] - '0') - 1);
    forn(i,3){
            ll val1 = (s[i] == '0' ? 10 : s[i] - '0');
            ll val2 = (s[i+1] == '0' ? 10 : s[i+1] - '0');
            ans += abs(val1 - val2);
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
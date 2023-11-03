#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    string s = "";
    while(n){
        s+=(n % 10 + '0');
        n /= 10;
    }
    ll sz = s.size();
    cout << (sz - 1) * 9 + (s[sz-1] - '0') << '\n';
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
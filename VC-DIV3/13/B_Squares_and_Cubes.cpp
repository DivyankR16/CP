#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    set<ll> s;
    for (ll i = 1; i * i <= n;i++){
        s.insert(i * i);
    }
    for (ll i = 1; i * i * i <= n;i++){
        s.insert(i * i * i);
    }
    cout << s.size() << "\n";
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
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll x;
    cin >> x;
    vector<ll> ans;
    ans.push_back(x);
    ll cnt = 0;
    while(x>(1<<cnt)){
        x -= (1 << cnt);
        ans.push
        cnt++;
    }
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
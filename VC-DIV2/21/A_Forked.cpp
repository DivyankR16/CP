#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void helper(set<pair<ll,ll>>&s,ll a,ll b,ll x,ll y){
    s.insert({x - a, y - b});
    s.insert({x - a, y + b});
    s.insert({x + a, y - b});
    s.insert({x + a, y + b});
    s.insert({x - b, y - a});
    s.insert({x - b, y + a});
    s.insert({x + b, y - a});
    s.insert({x + b, y + a});
}
void solve(){
    ll a, b;
    cin >> a >> b;
    ll xk, yk;
    cin >> xk >> yk;
    ll xq, yq;
    cin >> xq >> yq;
    set < pair < ll, ll >> posAttackK;
    set < pair < ll, ll >> posAttackQ;
    helper(posAttackK, a, b, xk, yk);
    helper(posAttackQ, a, b, xq, yq);
    ll ans = 0;
    for(auto i:posAttackK){
        if(posAttackQ.find(i)!=posAttackQ.end()){
            ans++;
        }
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
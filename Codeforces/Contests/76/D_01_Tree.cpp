#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
vector<ll> tree;
ll build(vector<ll>&a){
    ll n = a.size();
    while(__builtin_popcountll(n)!=1){
        n++;
        a.push_back(0);
    }
}
ll dfs(ll node,ll left,ll right){
    
}
void solve(){
    ll n;
    cin >> n;
    ll a[n];
    forn(i, n) cin >> a[i];
    map<ll,ll> mp;
    sort(a, a + n);
    for (ll i = 0; i < n - 1;i++)
    {

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
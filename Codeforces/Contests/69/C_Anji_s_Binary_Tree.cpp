#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
vector<ll> memo;
ll ans=LONG_LONG_MAX;
void recur(vector<pair<ll,ll>>&tree,string &s,ll n,ll idx,ll val){
     if(tree[idx].first==tree[idx].second && tree[idx].first==-1){
        //  cout << val << "\n";
         ans = min(ans, val);
         return;
     }
     if(s[idx]=='U'){
        if(tree[idx].first!=-1){
         recur(tree, s, n, tree[idx].first,val+1);
        }
        if (tree[idx].second != -1)
        {
            recur(tree, s, n, tree[idx].second,val+1);
        }
        }
     else if(s[idx]=='L'){
         if (tree[idx].first != -1)
         {
             recur(tree, s, n, tree[idx].first, val);
         }
         if (tree[idx].second != -1)
         {
             recur(tree, s, n, tree[idx].second, val + 1);
         }
         }
     else{
         if (tree[idx].first != -1)
         {
             recur(tree, s, n, tree[idx].first, val + 1);
         }
         if (tree[idx].second != -1)
         {
             recur(tree, s, n, tree[idx].second, val);
         }
         }
}
void solve(){
    ll n;
    cin >> n;
    string s;
    cin >> s;
    vector<pair<ll, ll>> tree;
    forn(i,n){
        ll x, y;
        cin >> x >> y;
        x--;
        y--;
        tree.push_back({x, y});
    }
    ans = LONG_LONG_MAX;
    // memo.resize(n, -1);
    recur(tree, s, n, 0, 0);
    cout << ans<<"\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
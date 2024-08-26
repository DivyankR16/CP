#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void recur(ll i,ll n,ll k,ll sum,ll r[],vector<ll>&cur,vector<vector<ll>>&ans){
    if(i==n){
        if(sum%k==0){
        ans.push_back(cur);
        }
        return;
    }
    for (ll j = 1; j <= r[i];j++){
        cur.push_back(j);
        recur(i + 1, n,k,sum+j, r, cur, ans);
        cur.pop_back();
    }
}
void solve(){
    ll n, k;
    cin >> n >> k;
    ll r[n];
    forn(i, n) cin >> r[i];
    vector<vector<ll>> ans;
    vector<ll> cur;
    recur(0, n,k,0, r, cur, ans);
    for(auto v:ans){
        for(auto i:v){
            cout << i << " ";
        }
        cout << "\n";
    }
}
int main(){
ios_base:: sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
solve();
return 0;
}
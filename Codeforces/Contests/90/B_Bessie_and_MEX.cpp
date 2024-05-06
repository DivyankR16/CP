#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    ll a[n];
    forn(i, n) cin >> a[i];
    vector<ll> ans(n,-1);
    // vector<bool> mex(n + 1, 0);
    set<ll> used;
    // set<ll> mex;
    // ll val;
    set<ll> ck;
    // if(a[0]<0){
    //     val = abs(a[0]);
    //     ck.insert(0);
    // }
    // else{
    //     val = 0;
    //     ck.insert(0);
    // }
    // ans[0] = val;
    // used.insert(val);
    ll idx = 0;
    // ll idx = 0;
    for (ll i = 0; i < n;i++){
        if(used.find(idx-a[i])==used.end() && (idx-a[i])>=0){
            ans[i] = idx - a[i];
            used.insert(idx - a[i]);
            ck.insert(idx-a[i]);
        }
        else{
            ans[i] = idx;
            used.insert(idx);
            ck.insert(idx);
        }
        while (ck.find(idx) != ck.end())
        {
            idx++;
        }
    }
    forn(i,n){
        cout<<ans[i]<<" ";
    }
    cout << "\n";
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
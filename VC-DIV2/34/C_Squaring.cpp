#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    ll a[n];
    forn(i, n) cin >> a[i];
    for (ll i = 1; i < n;i++){
        if(a[i]==1){
            if(a[i-1]>1){
                cout << -1 << "\n";
                return;
            }
        }
    }
    vector<ll> ans(n, 0);
    for (ll i = 1; i < n;i++){
        ll cur = a[i];
        ll prev = a[i - 1];
        ll op = 0;
        if(cur<prev){
            while(cur<prev){
                cur *= cur;
                op++;
            }
            ans[i] = ans[i - 1] + op;
        }
        else{
            ll safe = 0;
            while(prev!=1 && prev*prev<=cur){
                prev *= prev;
                safe++;
            }
            ans[i] = max(0ll,ans[i - 1] - safe);
        }
    }
    ll opt = 0;
    forn(i,n){
        opt += ans[i];
    }
    cout << opt << "\n";
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
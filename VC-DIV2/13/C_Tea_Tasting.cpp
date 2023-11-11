#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    ll a[n], b[n];
    forn(i, n) cin >> a[i];
    forn(i, n) cin >> b[i];
    ll presum[n];
    presum[0] = b[0];
    for (ll i = 1;i < n; i++)
    {
        presum[i] = presum[i - 1] + b[i];
    }
    // cout << lower_bound(presum, presum + n, 29) - presum << "\n";
    // forn(i,n){
    //     cout << presum[i] << " ";
    // }
    // cout << "\n";
    vector<ll> cnt(n, 0);
    vector<ll> extra(n, 0);
    for (ll i = 0; i < n;i++){
        bool ck = true;
        // cout << a[i] << "\n";
        ll idx = lower_bound(presum+i, presum + n, a[i] + (i ? presum[i - 1] : 0)) - presum;
        if(idx>=n){
            ck = false;
        }
        idx = min(idx, n - 1);
        if (presum[idx] == a[i] + (i ? presum[i - 1] : 0)){
            cnt[i]+=1;
            if(idx+1<n){
                cnt[idx + 1]-=1;
            }
        }
        else{
            if(ck){
            cnt[i] += 1;
            cnt[idx] -= 1;
            extra[idx] += a[i]-(idx?presum[idx-1]-(i?presum[i-1]:0):0);
            // cout << extra[idx] << "\n";
            }
            else{
            cnt[i] += 1;
            }
        }
    }
    // cout << extra[n - 1] << "\n";
    // cout << "\n";
    // // forn(i,n){
    // //     cout << extra[i] << " ";
    // // }
    // // cout << "\n";
    for (ll i = 0; i < n;i++){
        if(i)
            cnt[i] += cnt[i - 1];
        cout << cnt[i] * b[i] + extra[i]<<" ";
    }
    cout << "\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
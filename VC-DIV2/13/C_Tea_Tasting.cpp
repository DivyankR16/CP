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
        presum[i]+= presum[i - 1] + b[i];
    }
    vector<ll> cnt(n, 0);
    vector<ll> extra(n, 0);
    for (ll i = 0; i < n;i++){
        ll idx = lower_bound(presum, presum + n,a[i]+(i?presum[i-1]:0))-presum;
        if (presum[idx] == a[i] + (i ? presum[i - 1] : 0)){
            cnt[i]+=1;
            if(idx+1<n){
                cnt[idx + 1]-=1;
            }
        }
        else{
            cnt[i] += 1;
            cnt[idx] -= 1;
            extra[idx] += presum[idx] - a[i] - (i ? presum[i - 1] : 0);
        }
    }
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
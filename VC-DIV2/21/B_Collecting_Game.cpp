#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    vector<pair<ll, ll>> a;
    forn(i,n){
        ll x;
        cin >> x;
        a.push_back({x, i});
    }
    sort(a.begin(), a.end());
    vector<ll> ans(n, 0);
    ll sum[n];
    ll next[n];
    for (ll i = 0; i < n;i++){
        next[i] = 0;
        sum[i] = 0;
    }
        for (ll i = 0; i < n; i++)
        {
            if (i>=1 && next[i-1] >= i)
            {
                next[i] = next[i - 1];
                sum[i] = sum[i - 1];
            }
            else{
                next[i] = i;
                sum[i] += (i?sum[i - 1]:0) + a[i].first;
                while(next[i]+1<n && sum[i]>=a[next[i]+1].first){
                    next[i]++;
                    sum[i] += a[next[i]].first;
                }
            }
            ans[a[i].second] = next[i];
        }
    for(auto i:ans){
        cout << i << " ";
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
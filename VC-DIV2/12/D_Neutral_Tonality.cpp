#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, m;
    cin >> n >> m;
    ll a[n], b[m];
    forn(i, n) cin >> a[i];
    forn(i, m) cin >> b[i];
    ll minval = *min_element(b, b + m);
    vector<ll> ans;
    // vector<ll> util;
    sort(b, b + m);
    // forn(i,m){
    //     cout << b[i] << " ";
    // }
    // cout << "\n";
    ll j = m - 1;
    ll i = 0;
    while(i<n && j>=0){
        // if(b[j]<minval){
        //     util.emplace_back(b[j]);
        //     j--;
        // }
        // else{
            if(b[j]>=a[i]){
                ans.push_back(b[j]);
                j--;
            }
            else{
                ans.push_back(a[i]);
                i++;
            }
    }
    while(i<n){
        ans.push_back(a[i]);
        i++;
    }
    while(j>=0){
        ans.push_back(b[j]);
        j--;
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
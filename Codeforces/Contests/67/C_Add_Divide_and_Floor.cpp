#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    ll a[n];
    forn(i, n) cin >> a[i];
    ll mn = a[0];
    ll mx = a[0];
    forn(i,n){
        mn = min(mn, a[i]);
        mx = max(mx, a[i]);
    }
    vector<ll> ans;
    while(mn!=mx){
        if(mn%2==1 && mx%2==0){
            ans.push_back(1);
            mn += 1;
            mx += 1;
        }
        else{
            ans.push_back(0);
        }
        mn /= 2;
        mx /= 2;
    }
    cout << ans.size() << "\n";
    if(ans.size()>n)return;
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
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
bool check(ll a[],ll n,ll k){
    vector<vector<ll>> ele(n, vector<ll>(24, 0));
    for (ll i = 0; i < n;i++){
        if(i==0){
            
        }
        else{

        }
    }
}
void solve(){
    ll n;
    cin >> n;
    ll a[n];
    forn(i, n) cin >> a[i];
    ll l = 1;
    ll r = n;
    ll ans = INT_MAX;
    while(l<=r){
        ll k = l + (r - l) / 2;
        if(check(a,n,k)){
            l = k - 1;
            ans = k;
        }
        else{
            l = k + 1;
        }
    }
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
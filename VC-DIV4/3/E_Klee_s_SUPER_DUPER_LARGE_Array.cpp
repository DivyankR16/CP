#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
ll sum(ll n,ll k){
    return (n+1)*k+n * (n + 1) / 2;
}
void solve(){
    ll n,k;
    cin>>n>>k;
    ll l = 0;
    ll r = n - 1;
    ll idx = -1;
    while(l<=r){
        ll m = l + (r - l) / 2;
        ll ls = sum(m,k);
        ll rs = sum(n-1,k) - sum(m,k);
        if(ls<rs){
            idx = m;
            l=m + 1;
        }
        else{
            r = m - 1;
        }
    }
    ll ans1=INT_MAX;
    if(idx<n && idx>=0){
        ans1 = sum(n-1, k) - 2 * sum(idx, k);
    }
    ll ans2 = INT_MAX;
    if(idx+1<n){
    ans2 = 2 * sum(idx + 1, k) - sum(n-1, k);
    }
    cout << min(ans1, ans2) << "\n";
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
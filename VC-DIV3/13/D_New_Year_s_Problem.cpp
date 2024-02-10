#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
bool check(ll m,ll n,vector<vector<ll>>&a,ll mid){
    vector<bool> need(n, 0);
    bool istwo = false;
    for (ll i = 0; i < m; i++)
    {
        ll cnt = 0;
        for (ll j = 0; j < n; j++)
        {
            if (a[i][j] >= mid)
            {
                cnt++;
                need[j] = 1;
            }
        }
        if (cnt >= 2)
        {
            istwo = true;
        }
    }
    bool pos = true;
    forn(i, n)
    {
        if (!need[i])
        {
            pos = false;
        }
    }
    if (n > 1)
    {
        if (!istwo)
        {
            pos = false;
        }
    }
    return pos;
}
void solve(){
    ll m, n;
    cin >> m >> n;
    vector<vector<ll>> a;
    a.assign(m, vector<ll>(n));
    forn(i,m){
        forn(j,n){
            cin >> a[i][j];
        }
    }
    ll l = 1;
    ll r = 1e9;
    // while (check(m,n,a,r))r *= 2;
    ll ans = 0;
    while(l<=r){
        ll mid = l + (r - l) / 2;
     if(check(m,n,a,mid)){
         ans = mid;
         l = mid + 1;
     }
     else{
         r = mid - 1;
     }
    }
    cout << ans << "\n";
}
int main(){
ios_base:: sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
ll t;
cin>>t;
while(t--){
    // char l;
    // cin >> l;
    solve();
}
return 0;
}
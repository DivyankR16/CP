#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    vector<pair<ll, ll>> a,b,c;
    forn(i,n){
        ll x;
        cin >> x;
        a.push_back({x, i});
    }
    forn(i, n)
    {
        ll x;
        cin >> x;
        b.push_back({x, i});
    }
    forn(i, n)
    {
        ll x;
        cin >> x;
        c.push_back({x, i});
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    sort(c.begin(), c.end());
    ll ans = 0;
    if(a[n-1].second==b[n-1].second && a[n-1].second==c[n-1].second){
        // 1
        ll temp1 = 0;
        temp1 += a[n - 1].first;
        if(b[n-2].second==c[n-2].second){
            temp1 += max(b[n - 2].first + c[n - 3].first, b[n - 3].first + c[n - 2].first);
        }
        else{
            temp1 += b[n - 2].first + c[n - 2].first;
        }
        ll temp2 = 0;
        temp2 += b[n - 1].first;
        if (a[n - 2].second == c[n - 2].second)
        {
            temp2 += max(a[n - 2].first + c[n - 3].first, a[n - 3].first + c[n - 2].first);
        }
        else
        {
            temp2 += a[n - 2].first + c[n - 2].first;
        }
        ll temp3 = 0;
        temp3 += c[n - 1].first;
        if (b[n - 2].second == a[n - 2].second)
        {
            temp3 += max(b[n - 2].first + a[n - 3].first, b[n - 3].first + a[n - 2].first);
        }
        else
        {
            temp3 += b[n - 2].first + a[n - 2].first;
        }
        cout << max({temp1, temp2, temp3}) << "\n";
        return;
    }
    for (ll i = 1; i <=3;i++){
        for (ll j = 1; j <=3;j++){
            for (ll k = 1; k <=3;k++){
                if(a[n-i].second!=b[n-j].second && a[n-i].second!=c[n-k].second && b[n-j].second!=c[n-k].second){
                    ans = max(ans, a[n - i].first + b[n - j].first + c[n - k].first);
                }
            }
        }
    }
    cout << ans << "\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
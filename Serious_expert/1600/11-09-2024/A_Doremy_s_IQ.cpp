#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, q;
    cin >> n >> q;
    ll a[n];
    forn(i, n) cin >> a[i];
    ll ans = 0;
    ll l = -1;
    ll r = n-1;
    ll gd = 0;
    auto f = [&](ll x) -> bool
    {
        ll lq = q;
        for (ll i = x; i < n;i++)
        {
            if(a[i]>lq)
            {
                if(lq)
                {
                    lq--;
                }
                else
                {
                    return 0;
                }
            }
        }
            return 1;
    };
    ll idx = -1;
    while(r-l>1){
        ll x = l + (r - l) / 2;
        if(f(x)){
            // idx = x;
            r = x;
        }
        else{
            l = x;
        }
    }
    // cout << idx << "\n";
    // cout << r << "\n";
    for (ll i = 0; i < n;i++){
        if(i<r){
            if(a[i]<=q){
                cout << '1';
            }
            else{
                cout << '0';
            }
        }
        else{
            cout << '1';
        }
    }
    cout << "\n";
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
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, k;
    cin >> n >> k;
    ll a[n];
    forn(i, n) cin >> a[i];
    ll ans = LONG_LONG_MAX;
    forn(i,n){
        ans = min(ans, (a[i] % k==0?0:k-(a[i]%k)));
    }
    if(k==2){
        ll evencnt = 0;
        forn(i,n){
            if(a[i]%2==0){
                evencnt++;
            }
        }
        if(evencnt>=1){
            cout << 0 << "\n";
        }
        else{
            cout << ans << "\n";
        }
    }
    else if(k==4){
        ll evencnt = 0;
        forn(i, n)
        {
            if (a[i] % 2 == 0)
            {
                evencnt++;
            }
        }
        if(evencnt>=2){
            cout << 0 << "\n";
        }
        else if(evencnt==1){
            cout << min(1ll,ans) << "\n";
        }
        else{
            cout << min(2ll,ans) << "\n";
        }
    }
    else{
    cout << ans << "\n";
    }
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
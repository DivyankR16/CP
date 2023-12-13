#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    ll a[n];
    forn(i, n) cin >> a[i];
    bool isSorted = true;
    for (ll i = 1; i<n;i++){
        if(a[i]<a[i-1]){
            isSorted = false;
            break;
        }
    }
    if(isSorted){
        cout << 0 << "\n";
        return;
    }
    bool isReverseSorted = true;
    for (ll i = 1; i < n;i++){
       if(a[i]>a[i-1]){
           isReverseSorted = false;
           break;
       }
    }
    if(isReverseSorted){
        cout << 1 << "\n";
        return;
    }
    ll ans = INT_MAX;
    for (ll i = 1; i < n;i++){
        if(a[i]<a[i-1]){
            ll prev = INT_MIN;
            bool check = false;
            forn(j,n){
                if(a[(i+j)%n]>=prev){
                    prev = a[(i + j) % n];
                }
                else{
                    check = true;
                    break;
                }
            }
            if(!check){
                ans = min((n - i), i + 2);
            }
            break;
        }
    }
    for (ll i = 1; i < n;i++){
        if(a[i]>a[i-1]){
            ll prev = INT_MAX;
            bool check = false;
            forn(j,n){
                if(a[(i+j)%n]<=prev){
                    prev = a[(i + j) % n];
                }
                else{
                    check = true;
                    break;
                }
            }
            if(!check){
                ll val = min((i), (n - i)) + 1;
                ans = min(ans, val);
            }
            break;
        }
    }
    if(ans==INT_MAX){
        cout << -1 << "\n";
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
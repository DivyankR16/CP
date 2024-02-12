#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    ll a[n];
    forn(i, n) cin >> a[i];
    ll s = 0;
    forn(i,n){
        s += a[i];
    }
    for (ll i = n; i >= 1;i--){
        if(s%i==0){
            bool found = true;
            ll ns = s / i;
            ll cs = 0;
            for (ll i = 0; i < n;i++){
                cs += a[i];
                if(cs>ns){
                    found = false;
                    break;
                }
                else if(cs==ns){
                    cs = 0;
                }
            }
            if(found){
                cout << n - i << "\n";
                return;
            }
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
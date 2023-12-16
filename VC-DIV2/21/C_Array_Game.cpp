#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, k;
    cin >> n >> k;
    ll a[n];
    forn(i, n) cin >> a[i];
    if(k>=3){
        cout << 0 << "\n";
    }
    else if(k==1){
        sort(a, a + n);
        ll diff = a[0];
        for (ll i = 0; i < n - 1;i++){
            diff = min(diff, abs(a[i] - a[i + 1]));
        }
        cout << diff << "\n";
    }
    else{
        sort(a, a + n);
        ll diff = a[0];
        for (ll i = 0; i < n - 1; i++)
        {
            diff = min(diff, abs(a[i] - a[i + 1]));
        }
        for (ll i = 0; i < n;i++){
            for (ll j = i + 1; j < n;j++){
                ll df = abs(a[i] - a[j]);
                ll index = lower_bound(a, a + n, df)-a;
                if(index>=0 && index<n){
                    diff = min(diff, abs(df - a[index]));
                }
                if(index>=1){
                    diff = min(diff, abs(df - a[index - 1]));
                }
            }
        }
        cout << diff << "\n";
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
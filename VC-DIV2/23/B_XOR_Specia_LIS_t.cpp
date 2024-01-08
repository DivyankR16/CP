#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    ll a[n];
    forn(i, n) cin >> a[i];
    if(n%2==0){
        cout << "YES"<< "\n";
    }
    else{
        ll mn = INT_MAX;
        for (ll i = n - 1; i >= 0;i--){
            if(a[i]>=mn){
                cout << "YES"
                     << "\n";
                return;
            }
            else{
                mn = min(mn, a[i]);
            }
        }
        cout << "NO"
             << "\n";
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
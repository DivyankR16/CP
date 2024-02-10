#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    ll a[n];
    forn(i, n) cin >> a[i];
    ll gcd1 = 0;
    ll gcd2 = 0;
    for (ll i = 0; i<n;i++){
        if(i%2==0){
            gcd1 = __gcd(gcd1, a[i]);
        }
        else{
            gcd2 = __gcd(gcd2, a[i]);
        }
    }
    bool ck1 = true;
    bool ck2 = true;
    for (ll i = 0; i < n;i++){
        if(i%2==1){
            if(a[i]%gcd1==0){
                ck1 = false;
            }
        }
        else{
            if(a[i]%gcd2==0){
                ck2 = false;
            }
        }
    }
    if(ck1 || ck2){
        if(ck1){
            cout << gcd1 << "\n";
        }
        else{
            cout << gcd2 << "\n";
        }
    }
    else{
        cout << 0 << "\n";
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
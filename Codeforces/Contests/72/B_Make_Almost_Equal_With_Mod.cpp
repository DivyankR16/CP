#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    ll a[n];
    forn(i, n) cin >> a[i];
    bool isEven = false;
    bool isOdd = false;
    forn(i,n){
        if(a[i]%2==0){
            isEven = true;
        }
        if(a[i]%2==1){
            isOdd == true;
        }
    }
    if(isEven && isOdd){
        cout << 2 << "\n";
    }
    else{
        ll val = 1;
        while(val<=1e18){
        unordered_set<ll> s;
            for (ll i = 0; i < n;i++){
                s.insert(a[i] % val);
            }
            if(s.size()==2){
                cout << val << "\n";
                return;
            }
            val *= 2;
        }
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
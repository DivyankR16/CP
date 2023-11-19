#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    ll ans = 0;
    bool isfirst = true;
    while(n){
        if(isfirst){
        ll digit = n % 10;
        ans += 10 - digit - 1;
        n /= 10;
        isfirst = false;
        }
        else{
            ll digit = n % 10+1;
            ans += max(10 - digit - 1, 0ll);
            n /= 10;
            if(n==0){
                ans += digit - 1;
            }
        }
    }
    cout << ans << "\n";
}
int main(){
solve();
return 0;
}
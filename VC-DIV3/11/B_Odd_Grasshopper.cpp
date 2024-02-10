#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll x, n;
    cin >> x >> n;
    if(n==0){
        cout << x << "\n";
        return;
    }
    if(abs(x)%2==1){
        ll ans = x + 1;
        n -= 1;
        ans += (n / 4) * 4;
        if(n%4>=1){
            ll val = 1 + 4 * (n / 4) + 1;
            ans -= val;
        }
        if(n%4>=2){
            ll val = 1 + 4 * (n / 4) + 2;
            ans -= val;
        }
        if(n%4>=3){
            ll val = 1 + 4 * (n / 4) + 3;
            ans += val;
        }
        cout << ans << "\n";
    }
    else{
        ll ans = x - 1;
        n -= 1;
        ans -= (n / 4) * 4;
        if (n % 4 >= 1)
        {
            ll val = 1 + 4 * (n / 4) + 1;
            ans += val;
        }
        if (n % 4 >= 2)
        {
            ll val = 1 + 4 * (n / 4) + 2;
            ans += val;
        }
        if (n % 4 >= 3)
        {
            ll val = 1 + 4 * (n / 4) + 3;
            ans -= val;
        }
        cout << ans << "\n";
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
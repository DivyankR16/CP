#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    auto f = [&](ll a, ll b) -> ll
    {
        cout << '?' << " " << a << " " << b << "\n";
        cout.flush();
        ll ans;
        cin >> ans;
        return ans;
    };
    ll l = 2;
    ll r = 999;
    ll x = -1;
    while(l<r){
        ll d = (r - l) / 3;
        ll a = l + d;
        ll b = r - d;
        ll v = f(a, b);
        if(v==(a+1)*(b+1)){
            r = a;
        }
        else if(v==a*(b+1)){
            r = b;
            l = a + 1;
        }
        else{
            l = b+1;
        }
    }
    cout << '!' <<" "<< (l + r) / 2 << "\n";
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
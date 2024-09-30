#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    auto ask = [&](ll a, ll b) -> ll
    {
        cout << '?' << " " << a << " " << b << "\n";
        cout.flush();
        ll ans;
        cin >> ans;
        return ans;
    };
    ll l = 1;
    ll r = 1000;
    ll x = -1;
    while (l<=r)
    {
        ll m = l + (r - l) / 2;
        ll area= ask(m,m);
        if(area>m*m){
            x = m;
            r = m - 1;
        }
        else{
            l = m + 1;
        }
}
cout << '!' << " " << x << "\n";
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
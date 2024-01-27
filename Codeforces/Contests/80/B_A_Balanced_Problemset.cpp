#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll x, n;
    cin >> x >> n;
    if(x%n==0){
        cout << x / n << "\n";
    }
    else{
        vector<ll> d;
        ll ans = 1;
        for (ll i = 1; i * i <= x;i++){
            if(x%i==0){
                ll div1 = i;
                ll div2 = x / i;
                if(div1<=(x/n)){
                    ans = max(ans, div1);
                }
                if(div2<=(x/n)){
                    ans = max(ans, div2);
                }
            }
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
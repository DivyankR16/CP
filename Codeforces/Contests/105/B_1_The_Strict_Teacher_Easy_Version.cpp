#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, m, q;
    cin >> n >> m >> q;
    ll b[m];
    forn(i,m){
        cin >> b[i];
    }
    ll av = b[0];
    ll bv = b[1];
    ll tmp = av;
    av = min(av, bv);
    bv = max(tmp, bv);
    // cout << av << " " << bv << "\n";
    while(q--){
        ll x;
        cin >> x;
        if(x<av){
            cout << av - 1 << "\n";
        }
        else if(x>av && x<bv){
            ll a1 = max(x - av, bv - x);
            ll a2 = min(x - av, bv - x);
            ll ans = (a1 - a2) / 2;
            a1 -= 2 * ans;
            cout << ans + min(a1, a2) << "\n";
        }
        else{
            cout << n - bv << "\n";
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
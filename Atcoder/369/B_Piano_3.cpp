#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    vector<ll> lh;
    vector<ll> rh;
    forn(i,n){
        ll x;
        cin >> x;
        char c;
        cin >> c;
        if(c=='L'){
            lh.push_back(x);
        }
        else{
            rh.push_back(x);
        }
    }
    ll ans = 0;
    for (ll i = 1; i < lh.size();i++){
        ans += abs(lh[i] - lh[i - 1]);
    }
    for (ll i = 1; i < rh.size(); i++)
    {
        ans += abs(rh[i] - rh[i - 1]);
    }
    cout << ans << "\n";
}
int main(){
ios_base:: sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
solve();
return 0;
}
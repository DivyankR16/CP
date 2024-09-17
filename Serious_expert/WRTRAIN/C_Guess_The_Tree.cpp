#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    vector<ll> parent(n, 0);
    forn(i, n) parent[i] = -1;
    auto ask = [&](ll a, ll b) -> ll
    {
        cout <<'?'<<" "<< a + 1 << " " << b + 1 << "\n";
        cout.flush();
        ll v;
        cin >> v;
        v--;
        return v;
    };
    for (ll i = 1; i < n;i++){
        ll cur = 0;
        while(true){
            ll x = ask(i, cur);
            if(x==i)
                break;
            cur = x;
        }
        parent[i] = cur;
    }
    cout << "!"<<" ";
    for (ll i = 1; i < n;i++)
    {
        cout << parent[i] + 1 << " " << i + 1 << " ";
    }
    cout << "\n";
    cout.flush();
}
int main(){
ios_base:: sync_with_stdio(false);
cin.tie(NULL);
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
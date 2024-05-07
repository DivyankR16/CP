#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, c, d;
    cin >> n >> c >> d;
    multiset<ll> s;
    forn(i,n*n){
        ll x;
        cin >> x;
        s.insert(x);
    }
    ll a = *s.begin();
    // s.erase(s.begin());
    for (ll i = 0; i <= n - 1;i++){
        for (ll j = 0; j <= n - 1;j++){
            // if(i!=0 && j!=0){
                ll need = a + i * c + j * d;
                if(s.find(need)!=s.end()){
                    s.erase(s.find(need));
                }
                else{
                    cout << "NO"
                         << "\n";
                    return;
                }
            // }
        }
    }
    cout << "YES"
         << "\n";
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
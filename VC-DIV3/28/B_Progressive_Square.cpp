#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, c, d;
    cin >> n >> c >> d;
    ll N = n * n;
    ll b[N];
    forn(i, N) cin >> b[i];
    ll f = *min_element(b, b + N);
    multiset<ll> s;
    forn(i,N){
        s.insert(b[i]);
    }
    ll i = 0;
    while(i<n){
        ll e = f + d * i;
        for (ll j = 0; j < n;j++){
            if(s.find(e+c*j)==s.end()){
                cout << "NO" << "\n";
                return;
            }
            else{
                s.erase(s.find(e + c * j));
            }
        }
        i++;
    }
    cout << "YES" << "\n";
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
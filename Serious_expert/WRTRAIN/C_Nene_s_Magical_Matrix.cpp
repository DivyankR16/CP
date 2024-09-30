#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    auto sum = [](ll n) -> ll
    {
        return n * (n + 1) / 2;
    };
    ll ans = n *(sum(n) - sum(n / 2));
    ans += (n / 2) * sum(n);
    ll op = n + n / 2;
    cout << ans << " " << op << "\n";
    forn(i,n){
        cout << 1 << " " << i + 1 << " ";
        forn(j,n){
            cout << j + 1 << " ";
        }
        cout << "\n";
    }
    forn(i,n/2){
        cout << 2 << " " << i + 1 << " ";
        forn(j, n)
        {
            cout << j + 1 << " ";
        }
        cout << "\n";
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
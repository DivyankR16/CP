#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    for (ll i = 1; i <= n - 2;i++){
        cout << i << " " << i << "\n";
    }
    cout << n - 1 << " " << n << "\n";
    cout << n  << " " << n << "\n";
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
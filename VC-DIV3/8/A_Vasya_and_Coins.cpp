#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll a, b;
    cin >> a >> b;
    if(a==0){
        cout << 1 << "\n";
        return;
    }
    cout << 2 * b + a + 1 << "\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n = 7;
    ll b[n];
    forn(i, n) cin >> b[i];
    ll a1 = b[0];
    ll a2 = b[1];
    ll a3 = b[2];
    if(a1+a3==b[4]){
        cout << a1 << " " << a2 << " " << a3 << "\n";
    }
    else{
        cout << b[0] << " " << b[1] << " " << b[3] << "\n";
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
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, s, m;
    cin >> n >> s >> m;
    ll l = 0;
    ll f = 0;
    forn(i,n){
        ll x, y;
        cin >> x >> y;
        if(l<x){
            f = max(x - l+1,f);
        }
        l = y + 1;
    }
    if(l<=m){
        f = max(m - l + 1, f);
    }
    if(f>=s){
        cout << "YES" << "\n";
    }
    else{
        cout << "NO" << "\n";
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
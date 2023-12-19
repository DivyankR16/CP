#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    ll a[n];
    forn(i, n) cin >> a[i];
    if(n==1){
        if(a[0]==1){
            cout << "YES"
                 << "\n";
        }
        else{
            cout << "NO"
                 << "\n";
        }
        return;
    }
    set<ll> s;
    ll mxcnt = 0;
    ll mx = 0;
    forn(i,n){
        s.insert(a[i]);
        mx = max(mx, a[i]);
    }
    forn(i,n){
        if(a[i]==mx){
            mxcnt++;
        }
    }
    if(s.find(mx-1)!=s.end() || mxcnt>=2){
        cout << "YES"
             << "\n";
    }
    else{
        cout << "NO"
             << "\n";
    }

}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    ll a[n];
    forn(i, n) cin >> a[i];
    forn(i,n){
        if(i%2==1){
            a[i] = -a[i];
        }
    }
    set<ll> s;
    ll sum = 0;
    forn(i,n){
        sum += a[i];
        if(sum==0){
            cout << "YES"
                 << "\n";
            return;
        }
        if(s.find(sum)!=s.end()){
            cout << "YES" << "\n";
            return;
        }
        s.insert(sum);
    }
    cout << "NO"
         << "\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
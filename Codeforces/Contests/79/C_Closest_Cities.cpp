#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    ll a[n];
    forn(i,n){
        cin >> a[i];
    }
    ll l[n];
    ll r[n];
    memset(l, 0, sizeof(l));
    memset(r, 0, sizeof(r));
    for (ll i = 1; i < n ;i++){
        if(i==n-1){
            l[i] += l[i - 1] + 1;
        }
        else if(abs(a[i]-a[i-1])<abs(a[i+1]-a[i])){
            l[i] += l[i - 1] + 1;
        }
        else{
            l[i] += l[i - 1] + abs(a[i] - a[i - 1]);
        }
    }
    for (ll i = n - 2; i >= 0;i--){
        if(i==0){
            r[i] += r[i + 1] + 1;
        }
        else if(abs(a[i]-a[i+1])<abs(a[i]-a[i-1])){
            r[i] += r[i + 1] + 1;
        }
        else{
            r[i] += r[i + 1] + abs(a[i] - a[i + 1]);
        }
    }
    ll m;
    cin >> m;
    forn(i,m){
        ll x, y;
        cin >> x >> y;
        x--;
        y--;
        if(x<y){
            cout<<r[x]-r[y]<<"\n";
        }
        else{
            cout << l[x] - l[y] << "\n";
        }
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
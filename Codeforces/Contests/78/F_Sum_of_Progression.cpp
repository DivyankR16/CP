#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, q;
    cin >> n >> q;
    ll a[n];
    forn(i,n){
        cin >> a[i];
    }
    //sqrt()
    ll B = 350;
    vector<vector<ll>>(B + 1, vector<ll>(n + 1, 0));
    forn(i,q){
      ll s,d,k;
      cin >> s >> d >> k;
      if(d>B){
          ll sum = 0;
          for (ll j = s-1; j < n;j+=d){
              sum += a[j];
          }
          cout << sum << "\n";
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
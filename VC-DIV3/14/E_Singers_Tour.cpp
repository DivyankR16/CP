#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    ll a[n];
    forn(i, n) cin >> a[i];
    ll sum = 0;
    forn(i,n){
        sum += a[i];
    }
    if(sum%(n*(n+1)/2)!=0){
        cout << "NO"
             << "\n";
        return;
    }
    sum /= (n * (n + 1) / 2);
    ll ans[n];
    for (ll i = 0; i < n;i++){
      if((sum-(a[i]-(i>=1?a[i-1]:a[n-1])))%n==0){
          if ((sum - (a[i] - (i >= 1 ? a[i - 1] : a[n - 1]))) / n>0){
              ans[i] = (sum - (a[i] - (i >= 1 ? a[i - 1] : a[n - 1]))) / n;
          }
          else{
              cout << "NO"
                   << "\n";
              return;
          }
      }
      else{
          cout << "NO"
               << "\n";
          return;
      }
    }
    cout << "YES"
         << "\n";
         forn(i,n){
             cout << ans[i] << " ";
         }
         cout << "\n";
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
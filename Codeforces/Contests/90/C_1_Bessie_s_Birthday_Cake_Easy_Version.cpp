#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll mod, n, y;
    cin >> mod >> n >> y;
    ll a[n];
    multiset<ll> s;
    forn(i,n){
        ll val;
        cin >> val;
        s.insert(val);
    }
    ll ans = n - 2;
    ll prev;
    ll fst;
    bool isfst = true;
    for(auto i:s){
      if(isfst){
          prev = i;
          fst = i;
          isfst = false;
          ans++;
      }
      else{
        if(prev==i-2){
            ans++;
        }
        prev = i;
      }
    }
    if(n<2){
        ans--;
    }
    else{
       if((prev+2)%mod!=fst){
           ans--;
       }
    }
    cout << ans << "\n";
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
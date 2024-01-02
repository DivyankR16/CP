#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
   ll n;
   cin>>n;
   vector<pair<ll, ll>> segments;
   vector<ll> s;
   forn(i,n){
       ll l, r;
       cin >> l >> r;
       segments.push_back({l, r});
       s.push_back(r);
   }
   sort(segments.begin(), segments.end());
   sort(s.begin(), s.end());
   ll ans = 0;
   for (ll i = 0; i < n;i++){
       s.erase(segments[i].second);
       auto it = lower_bound(s.begin(), s.end(), segments[i].second)- s.begin();
       if (lower_bound(s.begin(), s.end(), segments[i].second)!=s.end()){
           ll dis=(distance(s.begin(),lower_bound(s.begin(), s.end(), segments[i].second)));
           ans += dis;
              }
        else{
            ans += s.size();
        }
   }
    cout << ans << "\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    ll a[n];
    forn(i, n) cin >> a[i];
    map<char, ll> mp;
    for (char c = 'a'; c <= 'z';c++){
        mp.insert({c, 0});
    }
    string as = "";
    forn(i,n){
        for(auto v:mp){
           if(v.second==a[i]){
               as += v.first;
               mp[v.first]++;
               break;
           }
        }
    }
    cout << as << "\n";
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
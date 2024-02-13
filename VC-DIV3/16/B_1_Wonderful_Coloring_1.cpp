#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    string s;
    cin >> s;
    map<ll, ll> mp;
    forn(i,s.size()){
        mp[s[i] - '0']++;
    }
    ll ans = 0;
    ll delta = 0;
    for(auto i:mp){
        if(i.second>=2){
            ans++;
        }
        else{
            if(i.second==1){
                delta++;
            }
        }
    }
    cout << ans + delta / 2<< "\n";
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
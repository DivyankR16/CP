#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    string s;
    cin >> s;
    set<char> f;
    for(auto i:s){
        f.insert(i);
    }
    map<char, char> mp;
    string v = "";
    for(auto i:f){
        v+= i;
    }
    ll sz = v.size();
    ll i = 0;
    ll j = sz - 1;
    while(i<n && j>=0){
        mp[v[i]] = v[j];
        i++;
        j--;
    }
    // for(auto i:mp){
    //     cout << i.first << " " << i.second << "\n";
    // }
    for (ll i = 0; i < n;i++){
        s[i] = mp[s[i]];
    }
    cout << s << "\n";
    // cout << "\n";
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
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    string s;
    cin >> s;
    map<char, ll> mp;
    forn(i,n){
        mp[s[i]]++;
    }
    priority_queue<pair<ll, char>> p;
    for(auto i:mp){
        p.push({i.second, i.first});
    }
    string ans = "";
    while(!p.empty()){
        ll freq= p.top().first;
        char c = p.top().second;
        p.pop();
        ans += c;
        if(freq-1>0){
            p.push({freq - 1, c});
        }
    }
    cout << ans << '\n';
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
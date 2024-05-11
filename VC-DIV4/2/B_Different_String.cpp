#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    string s;
    cin >> s;
    map<char, ll> mp;
    string ref = "";
    ll n = s.size();
    forn(i,n){
        mp[s[i]]++;
    }
    forn(i,n){
        ref += s[i];
    }
    if(mp.size()<=1){
        cout << "NO" << "\n";
        return;
    }
    sort(s.begin(), s.end());
    if(s==ref){
        swap(s[0], s[n - 1]);
    }
    cout << "YES" << "\n";
    cout << s << "\n";
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
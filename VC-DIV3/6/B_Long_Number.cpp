#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    string s;
    cin >> s;
    map<ll, ll> mp;
    forn(i,9){
        ll x;
        cin >> x;
        mp[i + 1] = x;
    }
    bool issegmentstarted = false;
    forn(i,n){
        if (mp[s[i] - '0'] > s[i]-'0'){
            s[i] = mp[s[i]-'0']+'0';
            issegmentstarted = true;
        }
        else if (issegmentstarted && mp[s[i] - '0'] < s[i] - '0')
        {
            break;
        }
    }
    cout << s << "\n";
}
int main(){
solve();
return 0;
}
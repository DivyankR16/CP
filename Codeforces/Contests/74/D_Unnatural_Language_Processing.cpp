#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    map<char, char> mp;
    mp['a'] = 'V';
    mp['b'] = 'C';
    mp['c'] = 'C';
    mp['d'] = 'C';
    mp['e'] = 'V';
    string s;
    cin >> s;
    ll i = 0;
    string ans = "";
    while(i<n){
        if(i+3<n && mp[s[i]]=='C' && mp[s[i+1]]=='V' && mp[s[i+2]]=='C' && mp[s[i+3]]=='V'){
            ans += s[i];
            ans += s[i+1];
            ans += '.';
            i += 2;
        }
        else if (i + 3 < n && mp[s[i]] == 'C' && mp[s[i + 1]] == 'V' && mp[s[i + 2]] == 'C' && mp[s[i + 3]] == 'C'){
            ans += s[i];
            ans += s[i + 1];
            ans += s[i + 2];
            ans += '.';
            i += 3;
        }
        else if (i + 2 < n && i+3==n && mp[s[i]] == 'C' && mp[s[i + 1]] == 'V' && mp[s[i + 2]] == 'C'){
            ans += s[i];
            ans += s[i + 1];
            ans += s[i + 2];
            i += 3;
        }
        else if (i + 1 < n && i+2==n &&  mp[s[i]] == 'C' && mp[s[i + 1]] == 'V'){
            ans += s[i];
            ans += s[i + 1];
            i += 2;
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
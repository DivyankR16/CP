#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    string s;
    cin >> s;
    map<char, ll> mp;
    forn(i,6){
        if(s[i]=='R'){
            if(mp['r']==0){
                cout << "NO"
                     << "\n";
                return;
            }
        }
        if (s[i] == 'B')
        {
            if (mp['b'] == 0)
            {
                cout << "NO"
                     << "\n";
                return;
            }
        }
        if (s[i] == 'G')
        {
            if (mp['g'] == 0)
            {
                cout << "NO"
                     << "\n";
                return;
            }
        }
        mp[s[i]]++;
    }
    cout << "YES" << "\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
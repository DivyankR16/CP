#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, k, m;
    cin >> n >> k >> m;
    string s;
    cin >> s;
    string need;
    for (ll i = 0; i < m;i++){
        if(k>(s[i]-'a')){
            need += s[i];
        }
    }
    if(s.size()==0){
        cout << "NO"
             << "\n";
        for (ll i = 0; i < n;i++){
            cout << 'b';
        }
        cout << "\n";
        return;
    }
    string ans="";
    ll c = 0;
    map<char, ll> mp;
    for (ll i = 0; i < m;i++){
        mp[s[i]]++;
        if(mp.size()==k){
            ans += s[i];
            c++;
            mp.clear();
        }
    }
    if(c>=n){
        cout << "YES"
             << "\n";
    }
    else{
        cout << "NO"
             << "\n";
        char left;
        for (ll i = 0; i < k;i++){
            if(!mp[(i+'a')]){
                while(ans.size()<n){
                    ans += (i+'a');
                }
                break;
            }
        }
        cout << ans << "\n";
    }
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
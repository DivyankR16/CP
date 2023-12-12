#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    string s;
    cin >> s;
    char c1 = s[0];
    ll c2 = s[1];
    for (char i = '1'; i <= '8';i++){
        if(i!=c2){
        string ans = "";
        ans += c1;
        ans += i;
        cout << ans << "\n";
        }
    }
    for (char i = 'a'; i <= 'h';i++){
        if(i!=c1){
            string ans = "";
            ans += i;
            ans += c2;
            cout << ans << "\n";
        }
    }
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
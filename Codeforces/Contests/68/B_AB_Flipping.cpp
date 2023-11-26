#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll cntA = 0;
    // ll cntB = 0;
    ll ans = 0;
    forn(i,n){
        if(s[i]=='A'){
            cntA++;
        }
        else{
            ll cnt = 0;
            while(i<n && s[i]!='A'){
                cnt++;
                i++;
            }
            // if(i==n){
                cnt--;
            // }
            if(cntA){
            ans += cntA + cnt;
            cntA = 0;
            i--;
            s[i] = 'A';
            }
            i--;
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
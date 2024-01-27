#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    string s;
    cin >> s;
    string f;
    cin >> f;
    ll s1 = 0;
    ll f1 = 0;
    forn(i,n){
        if(s[i]=='1'){
            s1++;
        }
        if(f[i]=='1'){
            f1++;
        }
    }
    ll ans = abs(s1 - f1);
    ll val = ans;
    if(s1>f1){
        forn(i,n){
            if(s[i]=='1' && f[i]=='0' && val){
                s[i] = 0;
                val--;
            }
        }
    }
    else if(f1>s1){
        forn(i,n){
            if(s[i]=='0' && f[i]=='1' && val){
                s[i] = 1;
                val--;
            }
        }
    }
    forn(i, n)
    {
        if (s[i] == '0' && f[i] == '1')
        {
            ans++;
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
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    ll a[n];
    forn(i, n) cin >> a[i];
    string s;
    cin >> s;
    ll il = -1;
    ll ir = -1;
    for (ll i = 0; i < n;i++){
        if(s[i]=='L'){
            il = i;
            break;
        }
    }
    for (ll i = n - 1; i >= 0;i--){
        if(s[i]=='R'){
            if(i>il){
                ir = i;
                break;
            }
        }
    }
    if(il!=-1 && ir!=-1){
        ll ans = 0;
        for (ll i = il; i <= ir;i++){
            ans += a[i];
        }
        cout << ans << "\n";
    }
    else{
        cout << 0 << "\n";
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
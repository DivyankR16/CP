#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll a,b,c;
cin >> a >> b >> c;
ll ans = a;
ans += b / 3;
    ll val = b % 3;
    if(val){
    if(c>=3-val){
        c -= 3-val;
        ans++;
    }
    else{
        cout << -1 << "\n";
        return;
    }
    }
    ans += c / 3 + (c % 3 ? 1 : 0);
    cout << ans << "\n";
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
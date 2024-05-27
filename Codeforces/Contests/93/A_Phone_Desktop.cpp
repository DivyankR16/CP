#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll x, y;
    cin >> x >> y;
    ll ans = 0;
    while(x>=7 && y>=2){
        x -= 7;
        y -= 2;
        ans++;
    }
    while(x>=7){
        ll space = 15;
        space -= 4 * y;
        y -= y;
        x -= space;
        ans++;
    }
    while(y>=2){
        y -= 2;
        x = 0;
        ans ++ ;
    }
    if(x>0 || y>0){
        ans++;
    }
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
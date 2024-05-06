#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll a, b, l;
    cin >> a >> b >> l;
    ll x = 0;
    ll y = 0;
    set<ll> ans;
    while(round(pow(a,x))<=l){
        while(round(pow(b,y)<=l)){
        ll val = round(pow(a, x)) * round(pow(b, y));
        if(l%val==0){
            ans.insert(l / val);
        }
        y++;
        }
        x++;
    }
    cout << ans.size() << "\n";
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
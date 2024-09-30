#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, k;
    cin >> n >> k;
    if(k==1){
        cout << n << "\n";
        return;
    }
    ll val = 1;
    while(val*k<=n){
        val *= k;
    }
    ll ans = 0;
    while(n){
        if(val<=n){
        ans+=n/val;
        n=n%val;
        }
        val /= k;
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
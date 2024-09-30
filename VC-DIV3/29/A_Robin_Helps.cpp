#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n,k;
    cin>>n>>k;
    ll a[n];
    forn(i, n) cin >> a[i];
    ll v = 0;
    ll ans = 0;
    for (ll i = 0; i < n;i++){
        if(a[i]>=k){
            v += a[i];
        }
        else if(a[i]==0){
            if(v){
                v--;
                ans++;
            }
        }
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
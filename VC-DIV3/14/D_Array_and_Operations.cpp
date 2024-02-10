#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, k;
    cin >> n >> k;
    ll a[n];
    forn(i, n) cin >> a[i];
    sort(a, a + n);
    ll fi = n-k-1;
    ll ed = n - 1;
    ll ans = 0;
    ll cnt = 0;
    while(cnt+1<=k){
        ans += a[fi] / a[ed];
        fi--;
        ed--;
        cnt++;
    }
    for (ll i = 0; i <= fi;i++){
        ans += a[i];
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
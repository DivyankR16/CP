#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, k, d;
    cin >> n >> k >> d;
    ll a[n],v[k];
    forn(i, n) cin >> a[i];
    forn(i, k) cin >> v[i];
    ll ans = 0;
    ll temp[n];
    forn(j, n)
    {
        temp[j] = a[j];
    }
    for (ll i = -1; i <min(20*n, d-1);i++){
        if(i!=-1){
        for (ll j = 0; j < v[i%k];j++){
            temp[j] += 1;
        }
        }
        ll cnt = 0;
        for (ll j = 0; j < n;j++){
            if(temp[j]==j+1)
                cnt++;
        }
        ll left;
        if(i==-1){
            left = d - 1;
        }
        else{
            left = d - i - 2;
        }
        ans = max(ans, cnt + left / 2);
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
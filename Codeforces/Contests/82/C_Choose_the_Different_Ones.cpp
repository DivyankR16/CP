#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, m,k;
    cin >> n >> m>>k;
    ll a[n], b[m];
    forn(i, n) cin >> a[i];
    forn(i, m) cin >> b[i];
    bool cka[k + 1];
    bool ckb[k + 1];
    for (ll i = 0; i <= k;i++){
        cka[i] = 0;
        ckb[i] = 0;
    }
    forn(i,n){
        if(a[i]<=k){
            cka[a[i]] = 1;
        }
    }
    forn(i,m){
        if(b[i]<=k){
            ckb[b[i]] = 1;
        }
    }
    for(ll i = 1; i <= k; i++){
         if(!cka[i] && !ckb[i]){
             cout << "NO"
                  << "\n";
             return;
         }
    }
    ll cnt1 = 0;
    ll cnt2 = 0;
    for (ll i = 1; i <= k;i++){
        if(cka[i]){
            cnt1++;
        }
        if(ckb[i]){
            cnt2++;
        }
    }
    // cout << cnt1 << " " << cnt2 << "\n";
    if(cnt1<(k/2) || cnt2<(k/2)){
        cout << "NO"
             << "\n";
        return;
    }
        cout << "YES"
             << "\n";
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
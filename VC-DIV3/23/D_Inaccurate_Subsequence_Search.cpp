#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, m, k;
    cin >> n >> m >> k;
    ll a[n], b[m];
    forn(i, n) cin >> a[i];
    forn(i, m) cin >> b[i];
    multiset<ll> mt, ua, ub;
    forn(i, m)
    {
        ub.insert(b[i]);
    }
    ll ans = 0;
    ll i = 0;
    ll j = i + m-1;
    bool fst = true;
    while(j<n){
        if(fst){
        for (ll k = i; k <= j;k++){
            if(ub.find(a[k])!=ub.end()){
                ub.erase(ub.find(a[k]));
                mt.insert(a[k]);
            }
            else{
                ua.insert(a[k]);
            }
        }

        }
        if (!fst)
        {
            if (ub.find(a[j]) != ub.end())
            {
                ub.erase(ub.find(a[j]));
                mt.insert(a[j]);
            }
            else
            {
                ua.insert(a[j]);
            }
        }
        fst = false;
        if(mt.size()>=k){
            ans++;
        }
        if(mt.find(a[i])!=mt.end()){
            mt.erase(mt.find(a[i]));
            if(ua.find(a[i])!=ua.end()){
                mt.insert(a[i]);
                ua.erase(ua.find(a[i]));
            }
            else{
                ub.insert(a[i]);
            }
        }
        else{
            ua.erase(ua.find(a[i]));
        }
        i++;
        j++;
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
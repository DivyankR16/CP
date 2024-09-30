#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, m, k;
    cin >> n >> m >> k;
    ll a[n],b[m];
    forn(i, n) cin >> a[i];
    forn(i, m) cin >> b[i];
    map<ll,ll> obmp;
    forn(i,m){
        obmp[b[i]]++;
    }
    multiset<ll> obms;
    forn(i,m){
        obms.insert(b[i]);
    }
    map<ll, ll> curmp;
    multiset<ll> curms;
    for (ll i = 0; i < m;i++){
        curmp[a[i]]++;
        if(obms.find(a[i])!=obms.end()){
            curms.insert(a[i]);
            obms.erase(obms.find(a[i]));
        }
    }
    ll ans = 0;
    if(curms.size()>=k){
        ans++;
    }
    for (ll i = m; i < n;i++){
        ll j = i-m;
        if(curmp[a[j]]>obmp[a[j]]){
            curmp[a[j]]--;
        }
        else{
            obms.insert(a[j]);
            curms.erase(curms.find(a[j]));
            curmp[a[j]]--;
        }
        if (obms.find(a[i]) != obms.end())
        {
            curms.insert(a[i]);
            obms.erase(obms.find(a[i]));
        }
        curmp[a[i]]++;
        if(curms.size()>=k){
            ans++;
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
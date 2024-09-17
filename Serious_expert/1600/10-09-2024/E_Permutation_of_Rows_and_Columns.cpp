#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, m;
    cin >> n >> m;
    ll a[n][m];
    ll b[n][m];
    forn(i,n){
        forn(j,m){
            cin >> a[i][j];
        }
    }
    forn(i,n){
        forn(j,m){
            cin >> b[i][j];
        }
    }
    set<set<ll>> sr1;
    set<set<ll>> sc1;
    forn(i,n){
        set<ll> vr1;
        for (ll j = 0; j < m;j++){
            vr1.insert(a[i][j]);
        }
        sr1.insert(vr1);
    }
    forn(i,m){
        set<ll> vc1;
        for (ll j = 0; j < n;j++){
            vc1.insert(a[j][i]);
        }
        sc1.insert(vc1);
    }
    forn(i, n)
    {
        set<ll> vr2;
        for (ll j = 0; j < m; j++)
        {
            vr2.insert(b[i][j]);
        }
        if(sr1.find(vr2)==sr1.end()){
            cout << "NO" << "\n";
            return;
        }
    }
    forn(i, m)
    {
        set<ll> vc2;
        for (ll j = 0; j < n; j++)
        {
            vc2.insert(b[j][i]);
        }
        if(sc1.find(vc2)==sc1.end()){
            cout << "NO" << "\n";
            return;
        }
    }
    cout << "YES" << "\n";
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
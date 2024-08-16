#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    ll a[n];
    forn(i, n) cin >> a[i];
    vector<ll> gcd;
    forn(i,n-1){
        gcd.push_back(__gcd(a[i], a[i + 1]));
    }
    ll ind = -1;
    ll cnt = 0;
    for (ll i = 0; i < gcd.size() - 1;i++){
        if(gcd[i]>gcd[i+1]){
            cnt++;
            ind = i;
        }
    }
    // if(cnt>1){
    //     cout << "NO" << "\n";
    //     return;
    // }
    if(cnt==0){
        cout << "YES" << "\n";
        return;
    }
    vector<ll> m0,m1,m2;
    for (ll i = 0; i < n;i++){
        if(i!=ind){
            m0.push_back(a[i]);
        }
        if (i != ind+1)
        {
            m1.push_back(a[i]);
        }
        if (i != ind+2)
        {
            m2.push_back(a[i]);
        }
    }
    vector<ll> gcd0, gcd1, gcd2;
    forn(i,m0.size()-1){
        gcd0.push_back(__gcd(m0[i], m0[i + 1]));
    }
    forn(i, m1.size() - 1)
    {
        gcd1.push_back(__gcd(m1[i], m1[i + 1]));
    }
    forn(i, m2.size() - 1)
    {
        gcd2.push_back(__gcd(m2[i], m2[i + 1]));
    }
    bool c0 = 1;
    bool c1 = 1;
    bool c2 = 1;
    for (ll i = 0; i < gcd0.size() - 1;i++){
        if(gcd0[i]>gcd0[i+1]){
            c0 = 0;
            break;
        }
    }
    for (ll i = 0; i < gcd1.size() - 1; i++)
    {
        if (gcd1[i] > gcd1[i + 1])
        {
            c1 = 0;
            break;
        }
    }
    for (ll i = 0; i < gcd2.size() - 1; i++)
    {
        if (gcd2[i] > gcd2[i + 1])
        {
            c2 = 0;
            break;
        }
    }
    if(c0 || c1 || c2){
        cout << "YES" << "\n";
    }
    else{
        cout << "NO" << "\n";
    }
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
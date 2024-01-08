#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    // if(n==1){
    //     cout << 0 << "\n";
    //     return;
    // }
    ll a[n];
    forn(i, n) cin >> a[i];
    vector<ll> se1; 
    vector<ll> se2;
    se1.push_back(LONG_LONG_MAX);
    se2.push_back(LONG_LONG_MAX);
    ll ans = 0;
    forn(i,n){
        if(se1.back()>=a[i]){
            se1.push_back(a[i]);
        }
        // if (a[i] < a[i + 1])
        // {
        //     e[i] = e[i + 1] + 1;
        // }
        //1 3 2
        else if(se2.back()>=a[i]){
            se2.push_back(a[i]);
        }
        // else
        // {
        //     e[i] = e[i + 1];
        // }
        else{
            ans++;
            se1.push_back(a[i]);
        }
        // 4 5 3
        if (se1.back() - se2.back() > 0)
        {
            ll temp = se1.back();
            se1[se1.size() - 1] = se2[se2.size() - 1];
            se2[se2.size() - 1] = temp;
        }
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
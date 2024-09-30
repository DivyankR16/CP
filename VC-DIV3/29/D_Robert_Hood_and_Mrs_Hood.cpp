#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n, d, k;
    cin >> n >> d >> k;
    vector<ll> s(n + 1, 0);
    vector<ll> e(n + 1, 0);
    for (ll i = 0; i < k;i++){
        ll l, r;
        cin >> l >> r;
        s[l]++;
        e[r]++;
    }
    for (ll i = 1; i <= n;i++){
        s[i] += s[i - 1];
        e[i] += e[i - 1];
    }
    ll b = 0;
    ll m = 0;
    ll bd = 0;
    ll md = n;
    for (ll i = d; i <= n;i++){
        ll cur = s[i] - e[i - d];
        if(cur>bd){
            bd = cur;
            b = i-d;
        }
        if(cur<md){
            md = cur;
            m = i-d;
        }
    }
    cout << b+1 << " " << m+1 << "\n";
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
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    string s;
    cin >> s;
    vector<ll> a;
    for(auto i:s){
        a.push_back(i - '0');
    }
    for (ll k = n; k >= 1;k--){
        vector<ll> pref(n + 1, 0);
        for (ll i = 0; i <n-k+1;i++){
            if(i){
                pref[i] += pref[i - 1];
            }
            ll f = (a[i]) ^ (pref[i] & 1);
            if(!f){
                pref[i]++;
                pref[i + k]--;
            }
        }
        bool flag = true;
        for (ll i = n - k + 1; i < n;i++){
            if (i)
            {
                pref[i] += pref[i - 1];
            }
            ll f = (a[i]) ^ (pref[i] & 1);
            if(!f){
                flag = false;
                break;
            }
        }
        if(flag){
            cout << k << "\n";
            return;
        }
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
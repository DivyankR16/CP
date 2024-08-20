#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    ll a[n];
    forn(i, n) cin >> a[i];
    string s;
    cin >> s;
    ll i = 1;
    ll j = n;
    ll ans = 0;
    vector<ll> pref(n + 1, 0);
    for (int i = 1; i <= n;i++){
        pref[i] += pref[i - 1] + a[i - 1];
    }
        while (i < j)
        {
            if (s[i-1] != 'L')
                i++;
            if (s[j-1] != 'R')
                j--;
            if (s[i-1] == 'L' && s[j-1] == 'R')
            {
                ans += pref[j] - pref[i - 1];
                i++;
                j--;
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
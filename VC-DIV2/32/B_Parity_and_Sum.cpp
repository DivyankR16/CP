#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    ll a[n];
    forn(i, n) cin >> a[i];
    vector<ll> odd;
    vector<ll> even;
    forn(i,n){
        if(a[i]&1){
            odd.push_back(a[i]);
        }
        else{
            even.push_back(a[i]);
        }
    }
    if(odd.size()==0 || odd.size()==n){
        cout << 0 << "\n";
        return;
    }
    sort(even.begin(), even.end());
    ll ans = 0;
    ll l = 0;
    for (ll i = 0; i < odd.size();i++){
        l = max(l, odd[i]);
    }
    ll lst = even.back();
    for (ll i = 0; i < even.size(); i++)
    {
        if (even[i] < l)
        {
            l = even[i] + l;
            ans++;
        }
        else
        {
            while(l<even[i]){
                l +=lst;
                ans++;
            }
            l = even[i] + l;
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
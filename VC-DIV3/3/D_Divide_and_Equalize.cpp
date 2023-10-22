#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    ll a[n];
    forn(i, n) cin >> a[i];
    map<ll, ll> mp;
    forn(i,n){
        ll x = a[i];
        for (ll i = 2; i*i <= x;i++){
            while(x%i==0){
                mp[i]++;
                x /= i;
            }  
    }
    if(x>1)
            mp[x]++;
}
for(auto i:mp){
    if(i.second%n!=0){
            cout << "NO"
                 << "\n";
            return;
    }
}
cout<<"YES"<<'\n';
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
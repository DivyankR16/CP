#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin >> n;
ll a[n];
forn(i, n) cin >> a[i];
vector<ll>cnt(n + 1, 0);
forn(i,n){
    cnt[a[i]]++; 
}
vector<ll> gcdi(n + 1, 0);
for (ll i = n; i >= 1;i--){
    ll total_numbers = 0;
    ll invalid = 0;
    for (ll j = i; j <= n;j+=i){
        total_numbers += cnt[j];
        invalid += gcdi[j];
    }
    gcdi[i] += ((total_numbers * (total_numbers - 1) / 2) - invalid);
}
vector<bool> visited(n + 1, 0);
ll sum = 0;
for (ll i = 1; i <= n;i++){
    if(cnt[i]>0){
        for (ll j = i; j <= n;j+=i){
            if(!visited[j]){
                sum += gcdi[j];
                visited[j] = 1;
            }
        }
    }
}
cout << n * (n - 1) / 2 - sum << "\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
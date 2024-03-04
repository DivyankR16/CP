#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
const ll N = 2e5 + 5;
ll ans[N];
ll disum(ll n){
    ll s = 0;
    while(n){
        s += (n % 10);
        n /= 10;
    }
    return s;
}
void solve(){
    ll n;
    cin >> n;
    cout << ans[n] << "\n";
}
int main(){
ios_base:: sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
ll s = 0;
for (ll i = 1; i <= N; i++)
{
    s+= disum(i);
    ans[i] = s;
}
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin >> n;
ll a[n];
forn(i, n) cin >> a[i];
ll pre[n];
pre[n-1] = n;
for (ll i = n - 2; i >= 0; i--)
{
    if(a[i]==a[i+1]){
        pre[i] = pre[i + 1];
    }
    else{
        pre[i] = i + 1;
    }
}
ll q;
cin >> q;
forn(i,q){
    ll l, r;
    cin >> l >> r;
    if(pre[l-1]<=r-1){
        cout << l<< " " << pre[l-1] + 1 << "\n";
    }
    else{
        cout << -1 << " " << -1 << "\n";
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
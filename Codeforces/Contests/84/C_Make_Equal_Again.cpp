#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    ll a[n];
    forn(i, n) cin >> a[i];
    if(n==1){
        cout << 0 << "\n";
        return;
    }
    ll l = 0;
    ll r = n - 1;
    while(a[l]==a[0])
        l++;
        while(a[r]==a[n-1])
            r--;
    if(a[0]==a[n-1]){
        cout << max(0ll, r - l + 1) << "\n";
    }
    else{
        cout << min(n - l, r + 1) << "\n";
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
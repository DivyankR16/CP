#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
#define int int64_t
void solve(){
     int n;
    cin >> n;
    vector<int> a(n);
    int sum=0, sum2=0;
    for(int r=0;r<n;r++) {
        cin >> a[r];
        sum2+=abs(a[r]);
        if(a[r]<0) {
            sum++;
        }
    }
    if(sum%2==0) {
        cout << sum2 << '\n';
        return;
    }
    int ans=int(-1e9)*int(1e9);
    for(int r=0;r<n;r++) {
        ans=max(ans, sum2-abs(a[r])*2);
    }
    cout << ans << '\n';

}
int32_t main(){
int t;
cin>>t;
while(t--){
solve();
}
}
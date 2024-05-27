#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll a, b, c;
    cin >> a >> b >> c;
    if((a+b+c)%2==1){
        cout << -1 << "\n";
        return;
    }
    ll arr[3];
    arr[0] = a;
    arr[1] = b;
    arr[2] = c;
    sort(arr, arr + 3);
    ll ans = 0;
    while(arr[1]){
        ans++;
        arr[1]--;
        arr[2]--;
        sort(arr, arr + 3);
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
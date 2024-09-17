#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n,k;
    cin>>n>>k;
    if(k==0){
        cout << 0 << "\n";
        return;
    }
    if(k<=n){
        cout << 1 << "\n";
        return;
    }
    k -= n;
    ll i = 1;
    ll ans = 1;
    while(k && i<n){
        if(k<=(n-i)){
            cout << ans + 1 << "\n";
            return;
        }
        else{
            ans++;
            k -= (n - i);
        }
        if (k <= (n - i))
        {
            cout << ans + 1 << "\n";
            return;
        }
        else
        {
            ans++;
            k -= (n - i);
        }
        i++;
    }
    cout << 2 * n - 1 << "\n";
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
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    char a[n];
    forn(i, n) cin >> a[i];
    ll ans = 0;
    for (ll i = 0; i< n ;i++){
         if(i<n-1 && a[i]=='*' && a[i+1]=='*'){
             break;
         }
         else{
            if(a[i]=='@'){
                ans++;
            }
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
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
        cout << 1 << "\n";
        return;
    }
    ll d = -1;
    ll ans = 0;
    ll cnt = 0;
    for (ll i = 0; i < n;i++){
         if(!i){
             cnt++;
             ans += cnt;
         }
         else{
            if(d==-1){
                cnt++;
                ans+= cnt;
                d = a[i] - a[i - 1];
            }
            else{
                if(a[i]-a[i-1]==d){
                    cnt++;
                    ans += cnt;
                }
                else{
                    cnt = 2;
                    ans += cnt;
                    d = a[i] - a[i - 1];
                }

            }
         }
    }
    cout << ans << "\n";
}
int main(){
ios_base:: sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
solve();
return 0;
}
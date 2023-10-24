#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
ll recur(ll n,ll a[],ll idx,ll prev){
    if(idx==n){
        return 0;
    }
    ll ans = 0;
    ll fans = 0;
    if (a[idx] == prev + 1)
    {
       ans+=1+ recur(n, a, idx + 1, a[idx]);
       fans = max(fans, ans);
   }
   else{
       ans += recur(n, a, idx + 1, a[idx]);
       fans = max(fans, ans);
   }
   ans += recur(n, a, idx + 1, prev);
   fans = max(fans, ans);
   return fans;
}
void solve(){
    ll n;
    cin >> n;
    ll a[n];
    forn(i, n) cin >> a[i];
    cout<<recur(n,a,0,-2)<<"\n";
}
int main(){
solve();
return 0;
}
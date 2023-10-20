#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
ll maxprofit(ll a[],ll length,ll n){
    if(length==n){

    }
    ll maxProfff = INT_MIN;
    
    forn(i, n)
    {
        ll nlen = length + (i + 1);
        if (nlen <= n)
        {
            maxprofit(a, nlen, n);
        }
  }
}
void solve(){
    ll n;
    cin >> n;
    ll a[n];
    forn(i, n) cin >> a[i];

}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
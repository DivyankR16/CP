#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
ll floorSqrt(ll x)
{
    // Base cases
    if (x == 0 || x == 1)
        return x;
 
    // Starting from 1, try all numbers until
    // i*i is greater than or equal to x.
    ll i = 1, result = 1;
    while (result <= x) {
        i++;
        result = i * i;
    }
    return i - 1;
}
void solve(){
ll n;
cin>>n;
ll ans=0;
ll need1=0;
ll len=n;
map<ll,ll>mp;
ll mm=1;
// while (n % 2 == 0)
//     {
//         need1++;
//         n = n/2;
//         mp[2]=need1;
//         if(need1>mm){
//             mm=need1;
//         }
//     }
 ll needi=0;
    for (ll i = 2; i*i<= n;i++)
    {needi=0;
        while (n % i == 0)
        {
            needi++;
            n = n/i;}
            mp[i]=needi;
            if(needi>mm){
                mm=needi;
            }
    }
    if(n!=1){
    mp[n]=1;}
  forn(i,mm){
    ll val=1;
    for(auto &k:mp){
        if(k.second>0){
        k.second--;
        val*=k.first;
    }}
    ans+=val;
  }
 cout<<ans<<"\n";
}
signed main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);cout.tie(NULL);
ll t;
cin>>t;
while(t--){
solve();
};
return 0;
}
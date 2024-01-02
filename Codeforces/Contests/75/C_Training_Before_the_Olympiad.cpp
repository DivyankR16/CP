#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll a[n];
forn(i, n) cin >> a[i];
ll presum[n];
presum[0] = a[0];
for (ll i = 1; i < n;i++){
    presum[i] = presum[i - 1] + a[i];
}
ll preodd[n];
forn(i,n){
    preodd[i] = 0;
}
for (ll i = 0; i < n;i++){
    if(i){
        if(a[i]%2==1){
            preodd[i] += 1 + preodd[i - 1];
        }
        else{
    preodd[i] += preodd[i - 1];
        }
    }
    else{
        if (a[i] % 2 == 1)
        {
            preodd[i] += 1;
        }
    }
}
// for (ll i = 0; i < n;i++){
//     cout << preodd[i] << " ";
// }
// cout << "\n";
forn(i, n)
{
    ll odd = preodd[i];
    ll even = i + 1 - preodd[i];
    ll ans;
    // = presum[i] - (odd / 3);
    if (!i && even == 0)
    {
        cout << presum[i] << " ";
        continue;
    }
    if ((odd % 3) == 1)
    {
        ans = presum[i] - (odd + 2) / 3;
    }
    else{
        ans = presum[i] - odd / 3;
    }
        cout << ans << " ";
   
}
cout << "\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
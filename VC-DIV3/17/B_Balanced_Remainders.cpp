#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
    ll n;
    cin >> n;
    ll a[n];
    forn(i, n) cin >> a[i];
    ll r0 = 0;
    ll r1 = 0;
    ll r2 = 0;
    forn(i,n){
        if(a[i]%3==0)r0++;
        if(a[i]%3==1)r1++;
        if(a[i]%3==2)r2++;
    }
    if(r0==(n/3) && r1==(n/3) && r2==(n/3)){
        cout << 0 << "\n";
        return;
    }
    ll ans = 0;
    ll nr0 = 0;
    ll nr1 = 0;
    ll nr2 = 0;
    nr0 = (n / 3) - r0;
    nr1 = (n / 3) - r1;
    nr2 = (n / 3) - r2;
    if(nr0>0 && nr1>0){
        ans += nr0;
        ans += 2*nr1;
    }
    else if(nr1>0 && nr2>0){
        ans += nr1;
        ans += 2 * nr2;
    }
    else if(nr0>0 && nr2>0){
        ans += 2 * nr0;
        ans += nr2;
    }
    else if(nr0>0){
        ans += 2 * abs(nr1) + abs(nr2);
    }
    else if (nr1 > 0)
    {
        ans += abs(nr0) + 2*abs(nr2);
    }
    else if (nr2 > 0)
    {
        ans += 2 * abs(nr0) + abs(nr1);
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
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
if(n<=3){
    cout<<0<<"\n";
    return;
}
ll a[n];
forn(i,n)cin>>a[i];
ll l=0;
ll r=n-1;
ll ans=INT_MAX;
sort(a,a+n);
while(l<r){
          ll x1=((a[l]-a[0])%2==0)?(a[l]-a[0])/2:(a[l]-a[0])/2+1;
        ll x2=((a[r-1]-a[l+1])%2==0)?(a[r-1]-a[l+1])/2:(a[r-1]-a[l+1])/2+1;
        ll x3=((a[n-1]-a[r])%2==0)?(a[n-1]-a[r])/2:(a[n-1]-a[r])/2+1;
        ans=min(ans,max({x1,x2,x3}));
        ll ck1=((a[l+1]-a[0])%2==0)?(a[l+1]-a[0])/2:(a[l+1]-a[0])/2+1;
        ll ck2=((a[n-1]-a[r-1])%2==0)?(a[n-1]-a[r-1])/2:(a[n-1]-a[r-1])/2+1;
    if(ck1<=ck2){
        l++;
    }
    else{r--;}
}
cout<<ans<<"\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
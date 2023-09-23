#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
ll inversions(ll a[],ll n){
    ll ones=0;
    ll ans=0;
    ll i=0;
    while(i<n){
     if(a[i]==1){
         ones++;
     }
     else{
        ans+=ones;
     }
     i++;
    }
    return ans;
}
void solve(){
ll n;
cin>>n;
ll a[n];
forn(i,n)cin>>a[i];
ll ans=inversions(a,n);
forn(i,n){
    if(a[i]==0){
        a[i]=1;
        ans=max(ans,inversions(a,n));
        a[i]=0;
        break;
    }
}
for(ll i=n-1;i>=0;i--){
    if(a[i]==1){
        a[i]=0;
        ans=max(ans,inversions(a,n));
        a[i]=1;
        break;
    }
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
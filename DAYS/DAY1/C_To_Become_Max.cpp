#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,k;
cin>>n>>k;
ll maxele=INT_MIN;
ll ans=0;
ll a[n];
forn(i,n){cin>>a[i];
   maxele=max(maxele,a[i]);}
ll l=0;
ll r=maxele+k;
while(l<=r){
    ll mid=(l+r)/2;
    bool isok=false;
    forn(i,n){
    ll arr[n];
    memset(arr,0,sizeof(arr));
    ll kneeded=0;
    arr[i]=mid;
    for(ll j=i;j<n;j++){
          if(a[j]>=arr[j])break;
          if(j>=n-1){
            kneeded=k+1;
            break;
          }
            kneeded+=arr[j]-a[j];
            arr[j+1]=arr[j]-1;
    }
    if(kneeded<=k){
        isok=true;
        break;
    }
}
if(isok){
  ans=mid;
  l=mid+1;
}
else{
    r=mid-1;
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
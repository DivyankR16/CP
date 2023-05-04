#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll a[n];
forn(i,n)cin>>a[i];
vector<ll>ans;
forn(i,n){
      ll l=1;
      ll r=i+1;
      while(l<=r){
            ll mid=(l+r)/2;
            if(a[i-mid+1]>=mid){
                  l=mid+1;
            }
            else{
                  r=mid-1;
            }
      }
      cout<<r<<" ";
}
cout<<"\n";
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
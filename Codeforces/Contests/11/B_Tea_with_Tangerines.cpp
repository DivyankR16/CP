#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll arr[n];
forn(i,n){
    cin>>arr[i];
}
sort(arr,arr+n);
ll A=2*arr[0]-1;
ll ans=0;
forn(i,n){
  if(arr[i]<A){
    ans+=0;
  }
  else{
    if(arr[i]%A==0){
        ans+=(arr[i]/A-1);
    }
    else{
        ans+=(arr[i]/A);
    }
  }
}
cout<<ans<<endl;
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
};
return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,k;
cin>>n>>k;
ll arr[n];
forn(i,n){
    cin>>arr[i];
}
ll arr1[k];
forn(i,k){
    arr1[i]=0;
}
 for(ll i=0;i<n;i++){
        arr1[(i+1)%k]=max(arr1[(i+1)%k],arr[i]);
    }
ll ans=0;
for(ll i=0;i<k;i++){
    ans+=arr1[i];}
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
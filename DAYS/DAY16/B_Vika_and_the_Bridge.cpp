#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,k;
cin>>n>>k;
ll a[n];
forn(i,n)cin>>a[i];
vector<ll>arr[k];
forn(i,n){
    arr[a[i]-1].push_back(i);
}
ll ans=INT_MAX;
// forn(i,k){
//     cout<<"For "<<i<<" -> ";
//     forn(j,arr[i].size()){
//         cout<<arr[i][j]<<" ";
//     }
//     cout<<"\n";
// }
forn(i,k){
    vector<ll>diff;
    if(arr[i].size()!=0){
    diff.push_back(arr[i][0]);
    for(ll j=0;j<arr[i].size()-1;j++){
        diff.push_back(arr[i][j+1]-arr[i][j]-1);
    }
    diff.push_back(n-1-arr[i][arr[i].size()-1]);
    sort(diff.begin(),diff.end());
    ll sz=diff.size();
    ll val1=diff[sz-2];
    ll val2=diff[sz-1]/2;
    ll val=max(val1,val2);
    // for(auto i:diff){
    //     cout<<i<<" ";
    // }
    // cout<<"\n";
    ans=min(val,ans);}

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
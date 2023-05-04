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
ll ans=INT_MIN;
ll val;
forn(i,n){
    if(arr[i]>ans){
        ans=arr[i];
        val=i+1;
    }}
cout<<val<<endl;
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
};
return 0;
}
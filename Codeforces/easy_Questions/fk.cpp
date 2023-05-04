#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll arr[]={967,787,981,990,127,247,568,915,856,772,753,14,970,972,645,178,287,824,518,124,281,454,257};
ll n=sizeof(arr)/sizeof(arr[0]);
ll ans1=INT_MIN;
for (ll i = 1; i < n; i++)
{
   ans1=max(ans1,arr[i-1]-arr[i]);
}
ll ans2=INT_MIN;
for (ll i = 0; i < n; i++)
{
    ans2=max(ans2,arr[n-1]-arr[i]);
}
ll ans3=INT_MIN;
for (ll i = 0; i < n; i++)
{
    ans3=max(ans2,arr[i]-arr[0]);
}
cout<<max(max(ans2,ans3),ans1);
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
};
return 0;
}
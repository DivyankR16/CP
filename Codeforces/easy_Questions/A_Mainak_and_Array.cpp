#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll a[n];
forn(i,n){
    cin>>a[i];
}
ll maxx=*max_element(a,a+n);
ll minn=*min_element(a,a+n);
if(a[0]==minn || a[n-1]==maxx){
    cout<<maxx-minn<<endl;
    return;
}
ll check1=INT_MIN;
ll check2=INT_MIN;
forn(i,n){
    check1=max(check1,a[n-1]-a[i]);
}
forn(i,n){
    check2=max(check2,a[i]-a[0]);
}
ll need=a[0]-a[1];
for (ll i = 1; i < n ; i++)
{  need=max(need,a[i-1]-a[i]);
}
ll ans=max(max(check1,check2),need);
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
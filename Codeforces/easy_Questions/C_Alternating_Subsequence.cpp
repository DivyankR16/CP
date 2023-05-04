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
ll i=0;
ll ans=0;
while(i<n){
    ll minP=INT_MIN;
    ll maxN=INT_MIN;
    bool flag1=false;
    bool flag2=false;
    while(i<n && a[i]>0){
       minP=max(minP,a[i]);
       i++;
       flag1=true;
    }
    if(flag1)ans+=minP;
    while(i<n && a[i]<0){
        maxN=max(maxN,a[i]);
        flag2=true;
        i++;
    }
    if(flag2)ans+=maxN;
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
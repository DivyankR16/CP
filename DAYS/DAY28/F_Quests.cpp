#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,c,d;
cin>>n>>c>>d;
ll a[n];
forn(i,n)cin>>a[i];
ll need=min(n,d);
sort(a,a+n,greater<>());
ll l=0;
ll r=d-1;
ll ans=-1;
while(l<=r){
    ll mid=l+(r-l)/2;
    ll check=0;
    forn(i,d){
        if(i%(mid+1)<n){
       check+=a[i%(mid+1)];}
    }
    if(check>=c){
        l=mid+1;
        ans=max(ans,mid);
    }
    else{
        r=mid-1;
    }
}
if(ans==-1){
    cout<<"Impossible"<<"\n";
}
else{
    if(ans==d-1){
        cout<<"Infinity"<<"\n";
    }
    else{
        cout<<ans<<"\n";
    }
}
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
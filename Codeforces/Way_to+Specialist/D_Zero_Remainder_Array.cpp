#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,k;
cin>>n>>k;
ll a[n];
forn(i,n){
    cin>>a[i];
}
ll ans=-1;
ll diff[n];
forn(i,n){
    if(a[i]%k==0){
        diff[i]=0;
    }
    else{
        diff[i]=(a[i]/k+1)*k-a[i];
    }
}
sort(diff,diff+n);
ll i=0;
while(i<n && diff[i]==0)i++;
while(i<n){
    ll set=diff[i];
    ll cnt=0;
    while(i<n-1 && diff[i]==diff[i+1]){
        cnt++;
        i++;
    }
    ans=max(ans,cnt*k+set);
    if(cnt==0)i++;
}
cout<<++ans<<"\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
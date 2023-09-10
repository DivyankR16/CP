#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,m;
cin>>n>>m;
ll seg[m][2];
forn(i,m){
    cin>>seg[i][0]>>seg[i][1];
}
ll q;
cin>>q;
ll qr[q];
forn(i,q){
   cin>>qr[i];
}
ll l=0;
ll r=q-1;
ll ans=INT_MAX;
while(l<=r){
ll mid=(l+r)/2;
vector<ll>a(n,0);
forn(i,mid+1){
    a[qr[i]-1]++;
}
ll presum[n];
presum[0]=a[0];
for(ll i=1;i<n;i++){
    presum[i]=presum[i-1]+a[i];
}
bool isSatisfy=false;
forn(i,m){
     ll ls=seg[i][0]-1;
     ll rs=seg[i][1]-1;
     if(ls!=0){
        if(presum[rs]-presum[ls-1]>(rs-ls+1)/2){
            isSatisfy=true;
            break;
        }
     }
     else{
        if(presum[rs]>(rs-ls+1)/2){
            isSatisfy=true;
            break;
        }
     }
}
if(isSatisfy){
    ans=min(ans,mid);
    r=mid-1;
}
else{
    l=mid+1;
}
}
if(ans!=INT_MAX){
    cout<<ans+1<<"\n";
}
else{
    cout<<-1<<"\n";
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
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll a[n];
forn(i,n)cin>>a[i];
bool nd=true;
vector<ll>ans;
ll i=n-1;
ll indx=0;
while(i>=0){
    ll upidx=i+1;
    ll cnt=1;
     while(i>0 && a[i]==a[i-1]){
          cnt++;
          i--;
     }
     while(indx<a[upidx-1]){
        if(a[indx]!=upidx){
            nd=false;
            break;
        }
        indx++;
     }
     if(upidx-1==i)i--;
}
// forn(i,n){
//     if(a[i]!=ans[i]){
//         nd=false;
//         break;
//     }
// }
// forn(i,n){
//     cout<<ans[i]<<" ";
// }
// cout<<"\n";
if(nd){
    cout<<"YES"<<"\n";
}
else{
    cout<<"NO"<<"\n";
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
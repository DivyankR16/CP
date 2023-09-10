#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll ans=0;
ll cdmin=INT_MAX;
vector<ll>mx;
forn(i,n){
    ll m;
    cin>>m;
    ll a[m];
    ll nrmax=INT_MAX;
    ll inmin=INT_MAX;
    ll iiddx=-1;
    forn(j,m){
        cin>>a[j];
        if(a[j]<inmin){
            inmin=a[j];
            iiddx=j;
        }
    }
    forn(j,m){
        if(j!=iiddx){
            nrmax=min(nrmax,a[j]);
        }
    }
    mx.push_back(nrmax);
    cdmin=min(cdmin,inmin);
}
sort(mx.begin(),mx.end());
  forn(i,mx.size()){
    if(i){
        ans+=mx[i];
    }
  }
  ans+=cdmin;
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
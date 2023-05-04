#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void copy(ll z,ll a[],ll n,bool *p){
    ll v[n];
    ll m=0;
    forn(i,n){
        if(a[i]!=z){
            v[m++]=a[i];
        }
    }
    forn(i,m){
        if(v[i]!=v[m-1-i]){
            return;
        }
    }
    *p=true;
}
void solve(){
ll n;
cin>>n;
ll a[n];
map<ll,ll>m;
forn(i,n){
    cin>>a[i];
    m[a[i]]++;
}
bool *ans=(bool*)malloc(sizeof(bool));
*ans=true;
forn(i,n){
    if(a[i]!=a[n-i-1]){
        *ans=false;
      copy(a[i],a,n,ans);
      copy(a[n-1-i],a,n,ans);
      break;
    }
}
if(*ans){
    cout<<"YES"<<endl;
}
else{cout<<"NO"<<endl;}
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
};
return 0;
}
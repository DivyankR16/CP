#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
map<ll,ll>m;
ll a[n];
forn(i,n){cin>>a[i];
m[a[i]]++;}
ll q;
cin>>q;
forn(i,q){
    ll x,y;
    cin>>x>>y;
ll D=x*x-4*y;
if(D>=0){
    ll x1=(sqrtl(D)+x)/2;
    ll x2=(-sqrtl(D)+x)/2;
    if(x1+x2!=x || x1*x2!=y){
        cout<<0<<" ";
        continue;
    }
    if(x1==x2){
        cout<<m[x1]*(m[x1]-1)/2<<" ";
    }
    else{
        cout<<m[x1]*m[x2]<<" ";
    }
}
else{
    cout<<0<<"\n";
}
}
cout<<"\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
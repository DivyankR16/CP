#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
vector<ll>v;
map<ll,ll>m;
ll sum=0;
forn(i,n){
    ll x;
    cin>>x;
    sum+=x;
    v.push_back(x);
    m[x]++;
}
if((2*sum)%n!=0){
    cout<<0<<endl;
    return;
}
ll ans=0;
ll need=(2*sum)/n;
forn(i,n){
    ll a=v[i];
    ll b=need-a;
    if(m[b]>0)ans+=m[b];
    if(a==b){
        ans-=1;
    }
}
cout<<ans/2<<endl;
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
};
return 0;
}
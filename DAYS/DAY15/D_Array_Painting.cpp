#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll a[n];
forn(i,n)cin>>a[i];
ll power[n];
memset(power,0,sizeof(power));
vector<pair<ll,ll>>pos0;
ll ans=0;
ll i=0;
while(i<n){
    ll stidx=i;
    while(i<n && a[i]==0)i++;
    if(stidx!=i){
        pos0.push_back({stidx,i-1});
    }
    else{
        i++;
    }
}
}
int main(){
solve();
return 0;
}
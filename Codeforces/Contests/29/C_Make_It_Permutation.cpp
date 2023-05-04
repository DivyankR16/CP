#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,c,d;
cin>>n>>c>>d;
ll a[n];
forn(i,n)cin>>a[i];
ll udane_ki_cost=0;
ll dalne_ki_cost=0;
ll chk=1;
ll total_cost=0;
map<ll,ll>m;
forn(i,n){
    m[a[i]]++;
}
vector<ll>v;
for(auto i:m){
    if(i.second>1){
        udane_ki_cost+=(i.second-1)*c;
    }
    v.push_back(i.first);
}
n=v.size();
//-------------------------------------------------------------//
forn(i,n){
    while(chk!=v[i]){
        dalne_ki_cost+=d;
        chk++;
    }
    chk++;
}
total_cost+=dalne_ki_cost+udane_ki_cost;
for(ll i=n-1;i>=1;i--){
   dalne_ki_cost-=(v[i]-v[i-1]-1)*d;
   udane_ki_cost+=c;
   total_cost=min(total_cost,dalne_ki_cost+udane_ki_cost);
}
if(a[0]!=1){
   dalne_ki_cost=d;
   udane_ki_cost+=c;
   total_cost=min(total_cost,dalne_ki_cost+udane_ki_cost);
}
cout<<total_cost<<"\n";
}
signed main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);cout.tie(NULL);
ll t;
cin>>t;
while(t--){
solve();
};
return 0;
}
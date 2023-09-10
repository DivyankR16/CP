#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
set<pair<ll,ll>>s;
vector<ll>ans(n);
s.insert({-n,0});
ll k=1;
while(!s.empty()){
   auto cur=*(s.begin());
   s.erase(s.begin());
   ll len=-cur.first;
   ll stidx=cur.second;
   ll endidx=len+stidx-1;
   ll mid=(stidx+endidx)/2;
   ans[mid]=k++;
   if(stidx<mid)s.insert({-(mid-stidx),stidx});
   if(endidx>mid)s.insert({-(endidx-mid),mid+1});
}
for(auto i:ans){
   cout<<i<<" ";
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
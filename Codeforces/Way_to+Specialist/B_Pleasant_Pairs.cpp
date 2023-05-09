#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll a[n];
forn(i,n)cin>>a[i];
vector<pair<ll,ll>>ans;
forn(i,n){
    ans.push_back({a[i],i+1});
}
sort(ans.begin(),ans.end());
ll cnt=0;
for(ll i=0;i<n;i++){
   for(ll j=0;j<n;j++){
    if(ans[i].first*ans[j].first>2*n)break;
    if(ans[i].second<ans[j].second && ans[i].first*ans[j].first==ans[i].second+ans[j].second)cnt++;
   }
}
cout<<cnt<<"\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
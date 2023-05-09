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
for(ll j=n-1;j>=0;j--){
    for(ll i=n-1;i>=0;i--){
        if(i!=j && ans[j].first-ans[i].first<1)break;
        if(ans[j].second>ans[i].second && ans[j].second-ans[i].second==ans[j].first-ans[i].first)cnt++;
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
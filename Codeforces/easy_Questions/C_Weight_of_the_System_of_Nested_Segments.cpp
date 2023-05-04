#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,m;
cin>>n>>m;
ll q[m][2];
forn(i,m){
    cin>>q[i][0]>>q[i][1];
}
vector<pair<ll,pair<ll,ll>>>v;
forn(i,m){
   v.push_back(make_pair(q[i][1],make_pair(q[i][0],i)));
}
sort(v.begin(),v.end());
vector<pair<ll,ll>>ans;
ll sum=0;
forn(i,2*n){
    ans.push_back(make_pair(v[i].second.first,v[i].second.second));
    sum+=v[i].first;
}
sort(ans.begin(),ans.end());
cout<<sum<<endl;
forn(i,n){
    cout<<ans[i].second+1<<" "<<ans[2*n-i-1].second+1<<endl;
}
}
int main(){
ll t;
cin>>t;
while(t--){
cout<<endl;
solve();
};
return 0;
}
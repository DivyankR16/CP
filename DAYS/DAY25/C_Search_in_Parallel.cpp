#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,s1,s2;
cin>>n>>s1>>s2;
vector<pair<ll,ll>>v;
forn(i,n){
    ll x;
    cin>>x;
    v.push_back({x,i+1});
}
sort(v.begin(),v.end());
vector<ll>set1;
vector<ll>set2;
for(ll i=n-1;i>=0;i--){
   if(s1*(set1.size()+1)<s2*(set2.size()+1)){
    set1.push_back(v[i].second);
   }
   else{
    set2.push_back(v[i].second);
   }
}
cout<<set1.size()<<" ";
for(auto i:set1){
    cout<<i<<" ";
}
cout<<"\n";
cout<<set2.size()<<" ";
for(auto i:set2){
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
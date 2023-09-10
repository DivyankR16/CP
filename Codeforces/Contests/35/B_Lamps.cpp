#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll v[n][2];
forn(i,n){
    forn(j,2){
        cin>>v[i][j];
    }
}
unordered_map<ll,vector<ll>>m;
forn(i,n){
    m[v[i][0]].push_back(v[i][1]);
}
ll ans=0;
for(auto i:m){
    sort(i.second.begin(),i.second.end());
    ll idx=i.second.size()-1;
   ll cnt=0;
   while(idx>=0 && cnt<i.first){
    ans+=i.second[idx];
    cnt++;
    idx--;
   }
}
// ll ans=0;
// for(auto i:m){
//    ll idx=i.second.size()-1;
//    ll cnt=0;
//    while(idx>=0 && cnt<i.first){
//     ans+=i.second[idx];
//     cnt++;
//     idx--;
//    }
// }
cout<<ans<<"\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
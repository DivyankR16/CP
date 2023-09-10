#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,m;
cin>>n>>m;
ll degree[n];
memset(degree,0,sizeof(degree));
forn(i,m){
   ll x,y;
   cin>>x>>y;
   x--;y--;
   degree[x]++;
   degree[y]++;
}
map<ll,ll>mp;
forn(i,n){
    mp[degree[i]]++;
}
pair<ll,ll>arr[2];
ll x;
ll y;
ll cnt=0;
for(auto i:mp){
    if(i.first>1){
    arr[cnt++]={i.first,i.second};}
}
vector<ll>v;
for(auto i:mp){
    v.push_back(i.second);
}
sort(v.begin(),v.end());
if (v.size() == 3) {
		cout << v[1] << ' ' << v[2] / v[1] << '\n';
	}
	else {
		cout << v[0] - 1 << ' ' << v[1] / (v[0] - 1) << '\n';
	}
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
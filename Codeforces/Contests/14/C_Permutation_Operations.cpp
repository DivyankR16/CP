#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll a[n];
forn(i,n)cin>>a[i];
vector<pair<ll,ll>>v;
for (ll i = 0; i < n-1; i++)
{   if(a[i+1]-a[i]<0){
    v.push_back(make_pair(abs(a[i+1]-a[i]),i+1));
}
}
sort(v.begin(),v.end());
ll i=0;
ll count=0;
while(count<n && i<v.size()){
    while(v[i].first>0){
        cout<<v[i].second+1<<" ";
        v[i].first-=(count+1);
        count++;
    }
    i++;
}
while(count<n){
    cout<<1<<" ";
    count++;
}
cout<<endl;
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
};
return 0;
}
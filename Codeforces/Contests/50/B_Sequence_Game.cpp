#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll a[n];
forn(i,n)cin>>a[i];
vector<ll>ans;
ans.push_back(a[0]);
forn(i,n-1){
    if(a[i]<=a[i+1]){
        ans.push_back(a[i+1]);
    }
    else{
        ans.push_back(a[i+1]);
        ans.push_back(a[i+1]);
    }
}
cout<<ans.size()<<"\n";
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
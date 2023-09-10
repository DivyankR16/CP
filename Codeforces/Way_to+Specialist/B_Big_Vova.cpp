#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll a[n];
forn(i,n)cin>>a[i];
sort(a,a+n);
ll ck=a[n-1];
vector<ll>ans;
ans.push_back(ck);
vector<ll>need;
for(ll i=n-2;i>=0;i--){
    if(ck%a[i]==0){
         ans.push_back(a[i]);
    }
    else{
        need.push_back(a[i]);
    }
}
forn(i,ans.size()){
    cout<<ans[i]<<" ";
}
forn(i,need.size()){
    cout<<need[i]<<" ";
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
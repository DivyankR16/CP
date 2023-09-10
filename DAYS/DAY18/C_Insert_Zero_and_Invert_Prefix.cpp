#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll a[n];
forn(i,n)cin>>a[i];
if(a[n-1]==1){
    cout<<"NO"<<"\n";
    return;
}
cout<<"YES"<<"\n";
vector<ll>ans;
ll i=n-1;
while(i>=0){
    while(i>=0 && a[i]==0){
        ans.push_back(0);
        i--;
    }
    if(i>=0){
    ll cnt=1;
    while(i>0 && a[i-1]==1){cnt++;
    ans.push_back(0);
    i--;
    }
    ans.push_back(cnt);
    i--;}
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
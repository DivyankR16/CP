#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll x;
cin>>x;
vector<ll>ans;
ans.push_back(x);
ll idx;
ll i=0;
while(true){
    if((x>>i) & 1){
        if(x==(1<<i)){
          idx=i;
          break;
        }
        x-=(1<<i);
        ans.push_back(x);
    }
    i++;
}
while(idx>0){
     ans.push_back((1<<(idx-1)));
     idx--;
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
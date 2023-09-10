#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll num=1;
vector<ll>ans;
while(num<n){
    ans.push_back(num);
    num*=2;
}
ll left=num-ans[ans.size()-1];
bool endone=false;
if(left%2==1){
   endone=true;
left--;
}
for(ll i=0;i<31;i++){
    if(left & (1<<i)){
        ll val=ans[ans.size()-1]+round(pow(2,i));
        ans.push_back(val);
    }
}
if(endone){
    ans.push_back(n);
}
reverse(ans.begin(),ans.end());
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
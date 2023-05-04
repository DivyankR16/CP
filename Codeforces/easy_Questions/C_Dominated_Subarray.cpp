#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll a[n];
forn(i,n){
    cin>>a[i];
}
if(n<2){
    cout<<-1<<endl;
    return;
}
bool flag=true;
forn(i,n-1){
   if(a[i]!=a[i+1]){
      flag=false;
      break;
   }
}
if(flag){
    cout<<2<<endl;
    return;}
vector<ll>v[n+1];
forn(i,n){
    v[a[i]].push_back(i);
}
ll ans=INT_MAX;
for(auto i:v){
    forn(k,i.size()){
         if(k<i.size()-1){
        ans=min(ans,abs(i[k+1]-i[k]));}
    }
}
if(ans==INT_MAX){
    cout<<-1<<endl;
    return;
}
cout<<ans+1<<endl;
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
};
return 0;
}
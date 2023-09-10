#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll x,y,n;
cin>>x>>y>>n;
vector<ll>ans(n);
ans[0]=x;
ll cnt=n-1;
for(ll i=1;i<n;i++){
     ans[i]=ans[i-1]+cnt;
     cnt--;
}
if(ans[n-1]<=y){
    ll gap=y-ans[n-1];
    forn(i,n){
        if(i){
            cout<<ans[i]+gap<<" ";
        }
        else{
            cout<<ans[i]<<" ";
        }
    }
    cout<<"\n";
}
else{
    cout<<-1<<"\n";
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
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll l,r,x,y,k;
cin>>l>>r>>x>>y>>k;
bool ans=false;
for (ll i = x; i <= y; i++)
{
    if(l<=k*i && r>=k*i){
       ans=true;
    }
}
if(ans){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
}
int main(){
solve();
return 0;
}
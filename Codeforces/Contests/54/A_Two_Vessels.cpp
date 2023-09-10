#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll a,b,c;
cin>>a>>b>>c;
ll a1=max(a,b);
ll b1=min(a,b);
if(a==b){
    cout<<0<<"\n";
    return;
}
ll ans=0;
while(b1+c<a1-c){
   b1+=c;
   a1-=c;
   ans++;
}
ans++;
cout<<ans<<"\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll a,b;
cin>>a>>b;
if(abs(abs(a)-abs(b))<=1){
      cout<<abs(a)+abs(b)<<"\n";
      return;
}
a=abs(a);
b=abs(b);
ll x=min(a,b);
ll y=max(a,b);
y-=x;
cout<<y+y-1+2*x<<"\n";
}
signed main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);cout.tie(NULL);
ll t;
cin>>t;
while(t--){
solve();
};
return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
const ll N=48;
ll fib[N];
void need(){
    fib[0]=1;
    fib[1]=1;
    for(ll i=2;i<=47;i++){
        fib[i]=fib[i-1]+fib[i-2];
    }
}
bool ans(ll n,ll x,ll y){
   if(n==1){
    return true;
   }
   if(y>fib[n-1] && y<=fib[n]){
    return false;
   }
   if(fib[n]<=y)y-=fib[n];
   return ans(n-1,y,x);
}
void solve(){
ll n;
cin>>n;
ll x,y;
cin>>x>>y;
need();
if(ans(n,x,y)){
    cout<<"YES"<<"\n";
}
else{
    cout<<"NO"<<"\n";
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
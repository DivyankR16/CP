#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
ll ans[200010];
ll mod=1e9+7;
void solve(){
ll n,m;
cin>>n>>m;
ll ans1=0;
while(n){
    ans1+=ans[m-1+n%10]%mod;
    n/=10;
}
cout<<ans1%mod<<"\n";
}
int main(){
ll dcbo[10];
ll dcao[10];
memset(dcbo,0,sizeof(dcbo));
memset(dcao,0,sizeof(dcao));
dcbo[0]=1;
forn(i,200010){
   ll need=0;
   forn(j,10){
    if(j==0){
        dcao[j]=dcbo[9]%mod;
    }
    else if(j==1){
        dcao[j]=dcbo[9]%mod + dcbo[0]%mod;
    }
    else{
        dcao[j]=dcbo[j-1]%mod;
    }
   }
  forn(j,10){
    dcbo[j]=dcao[j];
    need+=dcao[j];
  }
  ans[i]=need%mod;
}
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
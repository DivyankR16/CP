#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll a,b;
cin>>a>>b;
ll n=1e5;
ll total_movesX=LONG_LONG_MAX;
ll total_movesY=LONG_LONG_MAX;
ll legmovesX=0;
ll legmovesY=0;
forn(i,max(a,b)){
  if(a%(i+1)==0){
   if(a/(i+1)+i<total_movesX+legmovesX){
    total_movesX=a/(i+1);
    legmovesX=i;
   }
  }
  if(b%(i+1)==0){
  if(b/(i+1)+i<total_movesY+legmovesY){
    total_movesY=b/(i+1);
    legmovesY=i;
   }
  }
cout<<"-------------------------------------------------------------"<<"\n";
cout<<total_movesX<<"\n";
cout<<total_movesY<<"\n";
cout<<legmovesX<<"\n";
cout<<legmovesY<<"\n";
cout<<total_movesX+total_movesY+max(legmovesX,legmovesY)<<"\n";
cout<<"-------------------------------------------------------------"<<"\n";
}
// cout<<total_movesX<<"\n";
// cout<<total_movesY<<"\n";
// cout<<legmovesX<<"\n";
// cout<<legmovesY<<"\n";
// cout<<total_movesX+total_movesY+max(legmovesX,legmovesY)<<"\n";
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
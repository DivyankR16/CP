#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll a[n];
forn(i,n)cin>>a[i];
ll b[n];
forn(i,n)cin>>b[i];
ll suma=0;
ll sumb=0;
forn(i,n)suma+=a[i];
forn(i,n)sumb+=b[i];
bool at=false;
bool bt=false;
forn(i,n){
    if(a[i]==1 && b[i]==0){
      at=true;
      break;
    }
}
forn(i,n){
    if(a[i]==0 && b[i]==1){
        bt=true;
        break;
    }
}
ll val=(at && bt)?abs(sumb-suma)+1:abs(sumb-suma);
cout<<val<<endl;
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
};
return 0;
}
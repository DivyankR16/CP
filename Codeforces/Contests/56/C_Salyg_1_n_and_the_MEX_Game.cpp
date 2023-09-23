#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
ll solve(){
ll n;
cin>>n;
ll a[n];
forn(i,n)cin>>a[i];
sort(a,a+n);
ll val=0;
ll mex=-1;
forn(i,n){
   if(a[i]!=val){
     mex=val;
     break;
   }
  val++;
}
if(mex=-1){
    mex=val;
}
ll cnt=0;
ll vall=-1;
while(cnt<2*n+1){
    cnt++;
    if(cnt==1){
    cout<<mex<<"\n";
    cout<<"\n";}
    else{
        cout<<vall<<"\n";
        cout<<"\n";
    }
    cout.flush();
    ll y;
    cin>>y;
    if(y==-1){
        return 1;
    }
    else if(y==-2){
        return -2;
    }
    else{
      vall=y;
    }
    cout.flush();
}
}
int main(){
ll t;
cin>>t;
while(t--){
ll val=solve();
if(val==-2){
    break;
}
}
return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll a[n];
forn(i,n)cin>>a[i];
ll l=0;
ll r=0;    //T... QUESTION
ll count=1; //I refuse to give up!!!! Lets see you tommarrow....
ll ans=0;
ll newneed;
while(r<n){
  while(r<n && a[r]>=count){
    ans++;
    count++;
    r++;
  }
  if(l==0 || l==newneed){
    newneed=r-1;
  ll len=newneed-l;
  ans+=len*(len+1)/2;}
  while(r<n && a[r]<count){
    l++;
    count--;
  }
}
cout<<ans<<endl;
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
};
return 0;
}
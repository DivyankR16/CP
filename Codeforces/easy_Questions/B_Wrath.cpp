#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll L[n];
forn(i,n)cin>>L[i];
ll khaliya=0;
ll i=n-2;
//ll j=n-1;
//while(i>0){
//  if(L[i]>=i){
//    khaliya+=j; 
//    break;
//  }   //RA... Question
  //---Other Method------
   ll count=0;
   ll j=n-1-L[n-1];
  while(i>=0){
    if(i>=j){
      count++;
    }
    j=min(j,i-L[i]);
    i--;
  }
  cout<<n-count<<endl;
//  if(L[i]==0){
//    j=min(j,i-1);
//  }
//  else{
//    khaliya+=L[i]-(i-j);
//    j=min(j,i-L[i]);
//  }
//  i--;
//}
//cout<<n-khaliya<<endl;
}
int main(){
solve();
return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,W;
cin>>n>>W;
ll w[n];
forn(i,n)cin>>w[i];
sort(w,w+n);
ll i=0;
ll j=n-1;

ll height=0;
while(i<=j){
    ll val;
    if(i!=j){
    val=w[i];}
    else{
        val=0;
    }
  while(i<=j && w[j]+val<=W){
     i++;
     if(i<=j){
     val+=w[i];}
  }
  height++;
  j--;
}
cout<<height<<"\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
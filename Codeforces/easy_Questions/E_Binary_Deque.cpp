#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,s;
cin>>n>>s;
ll arr[n];
ll sum=0;
ll need[n];
forn(i,n){
    need[i]=0;
}
forn(i,n){
    cin>>arr[i];
    if(i)need[i]+=need[i-1]+arr[i];
    else need[i]=arr[i];
}
if(need[n-1]<s){
    cout<<-1<<endl;
    return;
}
ll i=0,j=0,ans=INT_MIN;
while(i<n){
    ll diff=j?need[i]-need[j-1]:need[i];
    if(diff<=s){
      ans=max(ans,i-j+1);
      i++;}
    else{
      while(arr[j++]<1){}
    }
}
cout<<n-ans<<endl;
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
};
return 0;
}
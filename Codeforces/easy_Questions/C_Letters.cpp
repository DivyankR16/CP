#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,m;
cin>>n>>m;
ll a[n];
forn(i,n)cin>>a[i];
ll b[m];
forn(i,m)cin>>b[i];
ll j=0;
for(ll i=1;i<n;i++){
   a[i]+=a[i-1];
}
ll i=0;
while(i<m){
  if(b[i]<=a[j]){
    if(j!=0){
    cout<<j+1<<" "<<b[i]-a[j-1]<<endl;}
    else{
        cout<<j+1<<" "<<b[i]<<endl;
    }
    i++;
  }
  else{j++;}
}
}
int main(){
solve();
return 0;
}
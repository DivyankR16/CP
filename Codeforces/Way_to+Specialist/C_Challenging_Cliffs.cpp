#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll h[n];
forn(i,n)cin>>h[i];
sort(h,h+n);
ll mindiff=LONG_LONG_MAX;
ll idx1,idx2;
forn(i,n-1){
    if(abs(h[i]-h[i+1])<mindiff){
       mindiff=abs(h[i]-h[i+1]);
       idx1=i;
       idx2=i+1;
    }
}
cout<<h[idx1]<<" ";
forn(i,n){
    if(i!=idx1 && i!=idx2 && h[i]>=h[idx1]){
        cout<<h[i]<<" ";
    }
}
forn(i,n){
    if(i!=idx1 && i!=idx2 && h[i]<h[idx1]){
        cout<<h[i]<<" ";
    }
}
cout<<h[idx2]<<"\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
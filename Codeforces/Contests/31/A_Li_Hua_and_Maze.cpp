#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,m;
cin>>n>>m;
ll x1,y1,x2,y2;
cin>>x1>>y1>>x2>>y2;
if(x1==1 && y1==1 || x1==n && y1==m || x1==1 && y1==m || y1==1 && x1==n){
    cout<<2<<"\n";
    return;
}
if(x2==1 && y2==1 || x2==n && y2==m || x2==1 && y2==m || y2==1 && x2==n){
    cout<<2<<"\n";
    return;
}
if(x1==1 || y1==1 || x1==n || y1==m){
    cout<<3<<"\n";
    return;
}
if(x2==1 || y2==1 || x2==n || y2==m){
    cout<<3<<"\n";
    return;
}
cout<<4<<"\n";
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
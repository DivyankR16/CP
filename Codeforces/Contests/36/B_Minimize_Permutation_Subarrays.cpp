#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll p[n];
forn(i,n)cin>>p[i];
ll pos1;
ll pos2;
ll posn;
forn(i,n){
    if(p[i]==1)pos1=i;
    if(p[i]==2)pos2=i;
    if(p[i]==n)posn=i;
}
if(pos1>pos2){
    swap(pos1,pos2);
}
if(posn>pos1 && posn<pos2){
    cout<<pos1+1<<" "<<pos2+1<<"\n";
}
else if(posn<pos1){
    cout<<posn+1<<" "<<pos1+1<<"\n";
}
else{
    cout<<pos2+1<<" "<<posn+1<<"\n";
}
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
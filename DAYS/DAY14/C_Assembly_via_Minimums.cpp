#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll N=n*(n-1)/2;
ll b[N];
forn(i,N)cin>>b[i];
sort(b,b+N);
ll val=n-1;
ll i=0;
while(val>0){
    ll stidx=i;
    cout<<b[stidx]<<" ";
    while(i<stidx+val)i++;
    val--;
}
cout<<b[i-1]<<" ";
cout<<"\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll N=1+sqrtl(1+8*n);
ll D=2;
ll val=N/D;
ll need=val*(val-1)/2;
cout<<val+n-need<<"\n";

}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
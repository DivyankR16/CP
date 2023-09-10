#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,m;
cin>>n>>m;
if(n==1){
    cout<<0<<"\n";
    return;
}
ll val=n/2;
if(n==2){
    cout<<(m/val)*val+m%val<<"\n";
    return;
}
cout<<(m/val)*val*2+2*(m%val)<<"\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
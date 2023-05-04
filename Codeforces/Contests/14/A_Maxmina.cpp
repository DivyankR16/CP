#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,k;
cin>>n>>k;
ll a[n];
forn(i,n)cin>>a[i];
ll sum=0;
forn(i,n)sum+=a[i];
if(sum==0)cout<<"NO"<<endl;
else cout<<"YES"<<endl;
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
};
return 0;
}
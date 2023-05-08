#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,t;
cin>>n>>t;
ll a[n];
forn(i,n)cin>>a[i];
ll b[n];
forn(i,n)cin>>b[i];
ll i=0;
ll ans=-2;
ll need=INT_MIN;
while(i<n){
    if(i+a[i]<=t){
        if(b[i]>=need){
            need=b[i];
            ans=i;
        }
    }
    i++;
}
cout<<ans+1<<"\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
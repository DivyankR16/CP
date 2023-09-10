#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,k;
cin>>n>>k;
ll arr[n];
forn(i,n)arr[i]=0;
ll i=0;
ll ans=2;
arr[0]=1;
arr[n-1]=1;
i+=k;
while(i<n){
if(i<n && !arr[i]){
    ans++;
    arr[i]=1;
}
i+=k;
}
cout<<ans<<"\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
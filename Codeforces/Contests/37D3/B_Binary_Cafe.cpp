#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,k;
cin>>n>>k;
k=min(k,(ll)30);
if(n+1<=(1<<k)){
    cout<<n+1<<"\n";
}
else{
    cout<<(1<<k)<<"\n";
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
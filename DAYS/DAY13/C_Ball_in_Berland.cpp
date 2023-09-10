#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll a,b,k;
cin>>a>>b>>k;
ll N=max(a,b);
ll a1[N],b1[N];
ll bp1[k],bp2[k];
memset(a1,0,sizeof(a1));
memset(b1,0,sizeof(b1));
forn(i,k){
    cin>>bp1[i];
    a1[--bp1[i]]++;
}
forn(i,k){
    cin>>bp2[i];
    b1[--bp2[i]]++;
}
ll ans=0;
forn(i,k){
    ans+=k-a1[bp1[i]]-b1[bp2[i]]+1; 
}
cout<<ans/2<<"\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
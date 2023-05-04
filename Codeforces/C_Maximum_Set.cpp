#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
int l,r;
cin>>l>>r;
int sz=1;
while((l<<sz)<=r)sz++;
int ans;
ans=(r/(1<<(sz-1))-l+1);
if(sz>1){
    ans+=(sz-1)*max(0,r/(1<<(sz-2))/3-l+1);
}
cout<<sz<<" "<<ans<<"\n";
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
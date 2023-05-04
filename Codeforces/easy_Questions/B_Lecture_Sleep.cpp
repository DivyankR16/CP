#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,k;
cin>>n>>k;
ll a[n];
forn(i,n)cin>>a[i];
ll t[n];
forn(i,n)cin>>t[i];
vector<ll>missed(n);
ll done=0;
forn(i,n){
    if(i)missed[i]+=missed[i-1];
    if(t[i]==0)missed[i]+=a[i];
    else done+=a[i];
}
ll recoveredMissedFromK=0;
for (ll i = k-1; i < n; i++)
{   recoveredMissedFromK=max(recoveredMissedFromK,missed[i]-(i>=k?missed[i-k]:0));
}
cout<<done+recoveredMissedFromK<<endl;
}
int main(){
solve();
return 0;
}
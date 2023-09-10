#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll a[n];
forn(i,n)cin>>a[i];
sort(a,a+n);
ll i=n-1;
bool ans=false;
ll sm=0;
while(i>=1){
    if(a[i]==1)break;
    sm+=a[i]-1;
    if(sm>=i){
        ans=true;break;
    }
    i--;
}
if(ans)cout<<"YES"<<"\n";
else cout<<"NO"<<"\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
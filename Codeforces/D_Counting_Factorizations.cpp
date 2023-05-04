#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll a[2*n];
forn(i,2*n){
    cin>>a[i];
}
if(n==1){
    if(a[0]==1 && a[1]==1){
        cout<<0<<"\n";
        return;
    }
    if(a[0]==1 || a[1]==1){
        cout<<1<<"\n";
        return;
    }
}
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
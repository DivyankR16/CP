#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll a[n];
forn(i,n)cin>>a[i];
bool ans=false;
forn(i,n-1){
    for(ll j=i+1;j<n;j++){
        if(__gcd(a[i],a[j])<=2){
            ans=true;
            break;
        }
    }
}
if(ans){
    cout<<"Yes"<<"\n";
}
else{
    cout<<"No"<<"\n";
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
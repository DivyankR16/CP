#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void bs(ll n,ll a[],ll k){
    ll l=0;
    ll r=n-1;
    while(l<=r){
        ll mid=l+((r-l)/2);
        if(a[mid]==k){
            
        }
    }

}
void solve(){
ll n,x,p;
cin>>n>>x>>p;
string ans="No";
for(ll i=1;i<=p && i<=2*n;i++){
    if((x+i*(i+1)/2)%n==0){
        ans="Yes";
        break;
    }
}

cout<<ans<<"\n";
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
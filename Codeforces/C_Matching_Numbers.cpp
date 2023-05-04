#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
if(n%2==0){
    cout<<"No"<<"\n";
    return;
}
else{cout<<"Yes"<<"\n";
    ll opd=0;
    cout<<1<<" "<<2*n<<"\n";
    for(ll i=2;i<=n;i++){
        if(i<=n/2+1){
         cout<<i<<" "<<2*n-(i-1)-(++opd)<<"\n";}
         else{
            cout<<i<<" "<<2*n-(i-1)+(opd--)<<"\n";
         }
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
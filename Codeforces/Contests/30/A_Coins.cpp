#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,k;
cin>>n>>k;
if((k)%2==1 && n%2==1){
   cout<<"YES"<<"\n";
}
else if(n%2==0){
    cout<<"YES"<<"\n";
}
else{
    cout<<"NO"<<"\n";
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
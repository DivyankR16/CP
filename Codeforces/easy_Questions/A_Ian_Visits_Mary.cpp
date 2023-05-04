#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll a,b;
cin>>a>>b;
if(a==1 || b==1){
    cout<<1<<"\n";
    cout<<a<<" "<<b<<"\n";
    return;
}
cout<<2<<"\n";
cout<<a-1<<" "<<1<<"\n";
cout<<a<<" "<<b<<"\n";
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
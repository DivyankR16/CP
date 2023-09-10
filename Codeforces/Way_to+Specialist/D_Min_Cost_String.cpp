#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,k;
cin>>n>>k;
string ans="";
forn(i,k){
    for(ll j=i;j<k;j++){
       ans+=('a'+j);
       if(j!=k-1)ans+=('a'+i);
    }
}
forn(i,n){
    cout<<ans[i%ans.size()];
}
cout<<"\n";
}
int main(){
solve();
return 0;
}
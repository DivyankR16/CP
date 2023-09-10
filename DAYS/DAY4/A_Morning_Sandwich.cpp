#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll b,c,h;
cin>>b>>c>>h;
ll val=c+h;
if(b>val){
cout<<val+val+1<<"\n";
}
else{
    cout<<b+b-1<<"\n";
}
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
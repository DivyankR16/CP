#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll x1,y1,x2,y2;
cin>>x1>>y1>>x2>>y2;
cout<<(x2-x1)*(y2-y1)+1<<"\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
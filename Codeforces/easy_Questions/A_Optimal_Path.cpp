#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,m;
cin>>n>>m;
cout<<m*(m+1)/2+m*(n*(n+1)/2-(1))<<endl;
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
};
return 0;
}
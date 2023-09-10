#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n,k;
cin>>n>>k;
ll a[n];
forn(i,n)cin>>a[i];
vector<ll>v(n+1,0);
forn(i,n){
    v[a[i]]++;
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
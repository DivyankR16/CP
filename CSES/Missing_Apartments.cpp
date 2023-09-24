#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll a[n];
memset(a,0,sizeof(a));
forn(i,n-1){
   ll x;
   cin>>x;
   a[--x]++;
}
forn(i,n){
    if(!a[i]){
        cout<<i+1<<"\n";
        return;
    }
}
cout<<n+1<<"\n";
}
int main(){
solve();
return 0;
}
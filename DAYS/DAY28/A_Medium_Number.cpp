#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll a[3];
forn(i,3){
    cin>>a[i];
}
sort(a,a+3);
cout<<a[1]<<"\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
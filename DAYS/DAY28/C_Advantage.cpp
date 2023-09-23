#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll a[n];
forn(i,n)cin>>a[i];
ll b[n];
forn(i,n){
    b[i]=a[i];
}
sort(b,b+n);
forn(i,n){
    if(a[i]==b[n-1]){
        cout<<a[i]-b[n-2]<<" ";
    }
    else{
        cout<<a[i]-b[n-1]<<" ";
    }
}
cout<<"\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
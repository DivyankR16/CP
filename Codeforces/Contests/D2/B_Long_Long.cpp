#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll a[n];
forn(i,n)cin>>a[i];
ll sum=0;
forn(i,n){
  sum+=abs(a[i]);
}
cout<<sum<<" ";
ll i=0;
ll moves=0;
while(i<n && a[i]>=0)i++;
while(i<n){
    bool val=false;
    while(i<n && a[i]<=0){
        if(a[i]<0){
            val=true;
        }
        i++;
    }
    if(val){
    moves++;}
    i++;
}
cout<<moves<<"\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
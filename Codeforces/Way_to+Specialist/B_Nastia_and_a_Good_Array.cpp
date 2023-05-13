#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
void solve(){
ll n;
cin>>n;
ll a[n];
forn(i,n)cin>>a[i];
ll minVal=INT_MAX;
ll minPos=-1;
forn(i,n){
    if(a[i]<minVal){
        minVal=a[i];
        minPos=i;
    }
}
cout<<n-1<<"\n";
forn(i,n){
    if(i!=minPos){
        cout<<minPos+1<<" "<<i+1<<" "<<minVal<<" "<<minVal+abs(minPos-i)<<"\n";
    }
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
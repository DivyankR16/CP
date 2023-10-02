#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
ll totalBinStr(ll n){
    if(n==0){
        return 1;
    }
    if(n==1){
        return 2;
    }
    return totalBinStr(n-1)+totalBinStr(n-2);
}
void solve(){
ll n;
cin>>n;
cout<<"Number of ways are "<<totalBinStr(n)<<"\n";
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
}
return 0;
}
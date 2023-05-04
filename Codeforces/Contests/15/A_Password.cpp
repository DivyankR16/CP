#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i,n) for(ll i=0;i<n;i++)
ll fact(ll n)
{
    if (n == 0)
        return 1;
    return n * fact(n - 1);
}
void solve(){
ll n;
cin>>n;
ll a[n];
forn(i,n)cin>>a[i];
ll hash[10];
forn(i,10){
    hash[i]=-1;
}
forn(i,n){
    hash[a[i]]=1;
}
ll count=0;
forn(i,10){
    if(hash[i]==-1){
      count++;
    }
}
ll val=fact(count)/(fact(count-2)*2);
cout<<val*6<<endl;
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
};
return 0;
}
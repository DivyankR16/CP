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
    sum+=a[i];
}
ll ans=0;
ll k=n-1;
while(k>=0 && sum>0){
    if(a[k]==0){
        ans++;
        sum--;
    }
    else{sum--;}
    k--;
}
cout<<ans<<endl;
}
int main(){
ll t;
cin>>t;
while(t--){
solve();
};
return 0;
}